/*
 Group #: Group 5
 Members: Justin Sybrandt, Caelan Mayberry, Seth Loew
 Course: COMP 322, Object Oriented & Advanced Programming
 Date: 12/3/2014
 Description: This file declares the towm
*/ 

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

class Town : public Inventory
{
private:
	std::string name;
	map<Item,TransactionTuple > transactionLog;	//maps item to net buys / sells
	map<Item,int> prices; //the determined value of the item, not nessesarily the buy or sell price
	vector<Item>itemReference;
	
	void updatePrice(Item i);

	float markup;

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


	bool canTravelTo;

	std::string getName(){return name;}
};
