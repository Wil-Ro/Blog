#include "Header.h"

std::string Header::generateHTML(std::string markDown)
{
	return "<h1>" + markDown + "</h1>";
}