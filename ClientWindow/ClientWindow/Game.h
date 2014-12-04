#pragma once
#include"Town.h"
#include"Player.h"
#include"Item.h"
#include"Inventory.h"
using System::String;

#include <string>
using std::string;

#include <map>
using std::map;

#include<vector>
using std::vector;

#include<exception>
using std::exception;

class INVALID_ID: public exception{};
class INVALID_ORDER: public exception{};

class Game
{
private:
	static const int NUMBER_OF_TOWNS = 10;
	static const int MAX_STARTING_QUANTITY = 100;
	static const int NUMBER_OF_STARTING_ITEMS = 5;
	static const int MAX_SIMULATED_TRANSACTIONS = 1000;
	static const int STARTING_GOLD = 50;

	vector<Town>towns;
	vector<Item>items;
	vector<string> eventNames;
	Player player;


	int currentLocation;

	int dayCount;

	int count;

public:
	
	Game();

	void giveTownRandomItems(Town& t);

	string getRandomEvent();
	void EventEffect(string s);

	//runs garbage and moves items around
	void simulateWorld();

	Town& getCurrentLocation();
	
	void setCurrentLocation(int townID);

	vector<Item>*getItemReference(){return &items;}

	Player& getPlayer(){return player;}

	int getDayCount(){return dayCount;}

	void attemptToBuy(Item i, int ammount);

	void attemptToSell(Item i, int ammount);

	int getLocationID(string name);
};