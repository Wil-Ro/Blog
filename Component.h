#pragma once
class Component
{
public:
	char startIdentifier;
	char endIdentifier;

	virtual std::string generateHTML(std::string markDown);
};

