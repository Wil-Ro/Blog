#include "PageFactory.h"

PageFactory::PageFactory() 
{
	// generate component dictionary
	for (Component component : componentList)
	{
		componentDictionary.push_back({ component.startIdentifier, &component });
	}
}

void PageFactory::buildPage(std::string markDown) 
{
	Component* currentComponent;

	bool readingChunk = false;
	std::string currentChunk;
	/*
	Something worth noting here is that we dont pass the start
	and end identifier into the component.
	*/
	for (char character : markDown)
	{
		if (readingChunk) 
		{
			if (character == currentComponent->endIdentifier)
			{
				finalPage = currentComponent->generateHTML(currentChunk);
				readingChunk = false;
				currentChunk = "";
			}
			else
			{
				currentChunk.push_back(character);
			}
		}
		else
		{
			// search dictionary to find a component
			// if found, get component, set readingChunk to true 
		}
	}
}

std::string PageFactory::getPage()
{
	return finalPage;
}