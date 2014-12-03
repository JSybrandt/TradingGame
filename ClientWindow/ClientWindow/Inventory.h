#pragma once

#include"Item.h"
#include<map>
using std::map; //microsoft docs say to prefer this
//http://msdn.microsoft.com/en-us/library/hh700103.aspx
using std::pair;

#include<vector>
using std::vector;


class Inventory
{
private:
	map<Item,int> values;

public:
	Inventory(){};
	Inventory(vector<Item>itemReference);
	~Inventory();

	int getNumberOf(Item i);

	void increaseNumberOf(Item i, int ammount);

	void decreaseNumberOf(Item i, int ammount);


	
};