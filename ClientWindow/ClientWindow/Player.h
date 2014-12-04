#pragma once
#include "Inventory.h"
#include"Item.h"

#include<vector>
using std::vector;

struct HistoryTuple
{
		HistoryTuple() {}
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

	Inventory& getInventory(){return inv;}
	vector<HistoryTuple>& getHistory(){return history;}
	int getGold(){return gold;}
	void setGold(int n){if(n>0)gold = n;}
	void incrementGold(int n){if(n>=(-gold))gold += n;}
};