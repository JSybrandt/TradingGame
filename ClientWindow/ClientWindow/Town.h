#pragma once
#include"Inventory.h"
#include"Item.h"
using System::String;

#include <map>
using std::map;
using std::pair;

#include<vector>
using std::vector;
const float MARKUP = 1.25;
class Town
{
private:
	std::string name;
	map<Item,pair<int,int> > transactionLog;	//maps item to net buys / sells
	map<Item,int> prices; //the determined value of the item, not nessesarily the buy or sell price
	vector<Item>itemReference;
	bool canTravelTo;

	
	
public:
	Inventory inventory;

	Town(std::string name, vector<Item> itemReference);

	~Town();

	void refreshPrices();

	void updatePrice(Item i);

	int getBuyPrice(Item i);

	int getSellPrice(Item i);

	//returns the cost of the order
	int buy(Item i, int requestedAmmount);

	//returns the cost of the order
	int sell(Item i, int requestedAmmount);


};