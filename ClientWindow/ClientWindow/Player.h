/*
 Group #: Group 5
 Members: Justin Sybrandt, Caelan Mayberry, Seth Loew
 Course: COMP 322, Object Oriented & Advanced Programming
 Date: 12/3/2014
 Description: This file declares things needed for the player
 and the player history
*/ 

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
		int gold;
};

class Player : public Inventory
{
private:
	std::string name;
	int gold;
	
	vector<HistoryTuple> history;

public:
	Player(){};
	Player(std::string,vector<Item> itemReference);

	vector<HistoryTuple>& getHistory(){return history;}
	int getGold(){return gold;}
	void setGold(int n){if(n>0)gold = n;}
	void incrementGold(int n){if(n>=(-gold))gold += n;}
};