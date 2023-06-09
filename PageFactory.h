#pragma once
#include <string>
#include <string.h>
#include "Component.h"
#include "ComponentList.h"
#include <vector>

class PageFactory
{
	struct ComponentDictItem
	{
		char identifier;
		Component* component;
	};

	std::vector<ComponentDictItem> componentDictionary;

	std::string finalPage;

public:
	PageFactory();
	void buildPage(std::string markDown);
	std::string getPage();
};

