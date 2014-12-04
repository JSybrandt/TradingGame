/*
 Group #: Group 5
 Members: Justin Sybrandt, Caelan Mayberry, Seth Loew
 Course: COMP 322, Object Oriented & Advanced Programming
 Date: 12/3/2014
 Description: This file defines function for the inventory
*/ 

#include"Inventory.h"


Inventory::Inventory(vector<Item>itemReference)
{

	for(Item i : itemReference)
	{
		values[i] = 0;
	}
}

Inventory::~Inventory()
{
}

int Inventory::getNumberOf(Item i)
{
	return values[i];
}

void Inventory::increaseNumberOf(Item i, int ammount)
{
	if(ammount > 0)
		values[i]+=ammount;
}

void Inventory::decreaseNumberOf(Item i, int ammount)
{
	if(ammount > 0)
	{
		values[i]-=ammount;
		if(values[i]<0)
			values[i]=0;
	}
}
