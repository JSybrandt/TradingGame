#pragma once
#include "Inventory.h"
#include"Item.h"

#include<vector>
using std::vector;

struct HistoryTuple
{
		Item item;
		int numBought;
		int numSold;
		int price;
};

class Player
{
private:
	std::string name;
	int gold;
	Inventory inv;
	
	vector<HistoryTuple> history;

public:
	Player(){};
	Player(std::string,vector<Item> itemReference);

	Inventory* getInventory(){return &inv;}

	
};