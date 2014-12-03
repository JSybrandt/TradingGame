#pragma once

#include <string>

using System::String;
class Item
{
private:
	std::string name;
	int defaultCost;
public:
	Item(std::string n, int c)
	{
		name = n;
		defaultCost = c;
	}
	int getDefaultCost()
	{
		return defaultCost;
	}

	bool operator< (const Item& i) const
	{
		return i.defaultCost < defaultCost;
	}
	
};