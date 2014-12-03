#pragma once
#include"Town.h"
#include"Player.h"
#include"Item.h"
#include"Inventory.h"
using System::String;

#include <map>
using std::map;

#include<vector>
using std::vector;

class Game
{
private:
	static const int NUMBER_OF_TOWNS = 10;
	static const int MAX_STARTING_QUANTITY = 100;
	static const int NUMBER_OF_STARTING_ITEMS = 5;
	static const int MAX_SIMULATED_TRANSACTIONS = 1000;

	vector<Town>towns;
	vector<Item>items;
	Player player;

	int currentLocation;

public:
	
	Game();

	void giveTownRandomItems(Town& t);

	//runs garbage and moves items around
	void simulateWorld();

	Town& getCurrentLocation();
	
	void setCurrentLocation(int townID);

	vector<Item>*getItemReference(){return &items;}

};