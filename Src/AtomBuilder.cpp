#include "AtomBuilder.h"

AtomBuilder::AtomBuilder(std::string templateUrl)
{
    feed = readFile(templateUrl);
    int updateTagLocation = calculateStartOfIdentifierLocation(feed, "</updated>");
    if (updateTagLocation == -1)
        printf("unable to find header update tag in AtomFeedTemplate");
    feed.insert(updateTagLocation, getTimeString());
}

std::string AtomBuilder::getTimeString()
{
    // taken from https://en.cppreference.com/w/cpp/chrono/c/strftime
    std::time_t time = std::time({});
    char timeString[std::size("yyyy-mm-ddThh:mm:ssZ")];
    std::strftime(std::data(timeString), std::size(timeString),
                  "%FT%TZ", std::gmtime(&time));
    return timeString;
}

int AtomBuilder::calculateStartOfIdentifierLocation(std::string text, std::string id)
{
    int location = text.find(id);
    if (location == std::string::npos)
        printf("Warning: no article found in given template file");
    return location;
}

std::string AtomBuilder::readFile(std::string fileUrl)
{
    std::ifstream file(fileUrl);
    std::stringstream fileCache;
    fileCache << file.rdbuf();

    return fileCache.str();
}

std::string AtomBuilder::getFeedHeader(std::string title, std::string link, std::string timestamp)
{
    return  "<title>" + title + "</title>\n"
            + "<link href=\"" + link + "\"/>\n"
            + "<id>" + link + "</id>\n"
            + "<updated>" + timestamp + "</updated>\n";
}

void AtomBuilder::addHTMLEntry(std::string article, std::string title, std::string link, std::string timestamp)
{
    int insertLocation = calculateStartOfIdentifierLocation(feed, "</feed>");

    std::string buffer;
    buffer += "<entry>\n";
    buffer += getFeedHeader(title, link, timestamp);
    buffer += "<content type=\"html\">\n<![CDATA[\n";
    buffer += article;
    buffer += "]]>\n</content>\n</entry>";
    feed.insert(insertLocation, buffer);

}

void AtomBuilder::writeToFile(std::string outFolderUrl)
{
    outFolderUrl += "/feed.xml";
    std::ofstream file(outFolderUrl);
    file << feed;
    file.close();

    if (file.fail())
        printf("failed to write file to %s \n", outFolderUrl.c_str());
}
