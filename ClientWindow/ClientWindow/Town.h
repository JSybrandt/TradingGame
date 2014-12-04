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

struct TransactionTuple
{
	TransactionTuple(){numBought=numSold=0;}
	TransactionTuple(int b, int s){numBought=b;numSold=s;}
	int numBought,numSold;
};

class Town
{
private:
	std::string name;
	map<Item,TransactionTuple > transactionLog;	//maps item to net buys / sells
	map<Item,int> prices; //the determined value of the item, not nessesarily the buy or sell price
	vector<Item>itemReference;
	
	void updatePrice(Item i);
	
	Inventory inventory;
public:

	

	Town(std::string name, vector<Item> itemReference);

	~Town();

	void refreshPrices();

	int getBuyPrice(Item i);

	int getSellPrice(Item i);

	//returns the cost of the order
	int buy(Item i, int requestedAmmount);

	//returns the cost of the order
	int sell(Item i, int requestedAmmount);

	Inventory& getInventory(){return inventory;}

	bool canTravelTo;

	std::string getName(){return name;}
};
