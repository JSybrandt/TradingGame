/*
 Group #: Group 5
 Members: Justin Sybrandt, Caelan Mayberry, Seth Loew
 Course: COMP 322, Object Oriented & Advanced Programming
 Date: 12/3/2014
 Description: This file declares the item class
*/ 

#pragma once

#include <string>

using System::String;
class Item
{
private:
	std::string name;
	int defaultCost;
public:
	Item()
	{
		name = "Default Constructed";
		defaultCost = 0;
	}
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
	
	std::string getName(){return name;}
};