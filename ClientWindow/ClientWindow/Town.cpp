#include "Town.h"

Town::Town(std::string name, vector<Item > itemReference):inventory(itemReference)
{
	this->name = name;
	this->itemReference = itemReference;

	for(Item i : itemReference)
	{
		transactionLog[i] = TransactionTuple(0,0);
		prices[i] = i.getDefaultCost();
	}

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
	if(numTransactions>0)
	{
		float popularity = ((numBought-numSold)/numTransactions);
		prices[i] = prices[i] + prices[i]*popularity;
	}
}

int Town::getBuyPrice(Item i)
{
	return prices[i]*MARKUP;
}

int Town::getSellPrice(Item i)
{
	return prices[i];
}

//returns the cost of the order
int Town::buy(Item i, int requestedAmmount)
{
	if(inventory.getNumberOf(i) >= requestedAmmount)
	{
		inventory.decreaseNumberOf(i,requestedAmmount);
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
	inventory.increaseNumberOf(i,requestedAmmount);
	//record transaction, number of sold items
	transactionLog[i].numSold+=requestedAmmount;
	return prices[i]*requestedAmmount;
}

