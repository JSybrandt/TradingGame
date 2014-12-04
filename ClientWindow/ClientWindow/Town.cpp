/*
 Group #: Group 5
 Members: Justin Sybrandt, Caelan Mayberry, Seth Loew
 Course: COMP 322, Object Oriented & Advanced Programming
 Date: 12/3/2014
 Description: This file defines town functions
*/ 

#include "Town.h"

Town::Town(std::string name, vector<Item > itemReference)
{
	Inventory::Inventory(itemReference);
	this->name = name;
	this->itemReference = itemReference;

	for(Item i : itemReference)
	{
		transactionLog[i] = TransactionTuple(0,0);
		prices[i] = i.getDefaultCost();
	}

	markup = (((rand()%25)/100.0)+1);

}

Town::~Town()
{
}

void Town::refreshPrices()
{
	for(Item i : itemReference)
	{
		updatePrice(i);
		transactionLog[i]=TransactionTuple(0,0);
	}
}

void Town::updatePrice(Item i)
{

	//Todo: determine exactly how we want to do this
	float numBought = transactionLog[i].numBought;
	float numSold = transactionLog[i].numSold;
	float numTransactions = numBought+numSold;
	float noise = ((rand()%50)/100.0)+0.5;
	if(numTransactions>0)
	{
		float popularity = ((numBought-numSold)/numTransactions);
		prices[i] = i.getDefaultCost() + (i.getDefaultCost()/2)*popularity*noise;
	}
}

int Town::getBuyPrice(Item i)
{
	return prices[i]*markup;
}

int Town::getSellPrice(Item i)
{
	return prices[i];
}

//returns the cost of the order
int Town::buy(Item i, int requestedAmmount)
{
	if(getNumberOf(i) >= requestedAmmount)
	{
		decreaseNumberOf(i,requestedAmmount);
		//record transaction, number of bought items
		transactionLog[i].numBought+=requestedAmmount;
		return prices[i]*requestedAmmount;
	}
	else
		throw "Bad Buy";

}

//returns the cost of the order
int Town::sell(Item i, int requestedAmmount)
{
	increaseNumberOf(i,requestedAmmount);
	//record transaction, number of sold items
	transactionLog[i].numSold+=requestedAmmount;
	return prices[i]*requestedAmmount;
}

