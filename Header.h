#pragma once
#include <string>
#include "Component.h"
class Header : public Component
{
	std::string generateHTML(std::string markDown);
};

