#include "Game.h"




Game::Game()
	{
		
		dayCount = 0;

		items.push_back(Item("Sword",200));
		items.push_back(Item("Armor",175));
		items.push_back(Item("Tools",45));
		items.push_back(Item("Iron",75));
		items.push_back(Item("Leather",120));
		items.push_back(Item("Common_Spices",20));
		items.push_back(Item("Salt",15));
		items.push_back(Item("Groceries",10));
		items.push_back(Item("Wine",60));
		items.push_back(Item("Rare_Spices",50));
		items.push_back(Item("Paper",25));
		items.push_back(Item("Oil",85));
		items.push_back(Item("Wax",55));
		items.push_back(Item("Perfume",100));
		items.push_back(Item("Silk",150));
		items.push_back(Item("Pearls",250));

		player = Player("def",items);

		vector<std::string>townNames;
		townNames.push_back("Newsham");
		townNames.push_back("Wolfwater");
		townNames.push_back("Oakheart");
		townNames.push_back("Aberdeen");
		townNames.push_back("Dornwich");
		townNames.push_back("Snake's Canyon");
		townNames.push_back("Icemeet");
		townNames.push_back("Squall's End");
		townNames.push_back("Everwinter");
		townNames.push_back("Dragontail");


		for(int i = 0 ; i < NUMBER_OF_TOWNS; i++)
		{
			towns.push_back(Town(townNames[i],items));

			for(int j = 0 ; j < NUMBER_OF_STARTING_ITEMS;j++)
				giveTownRandomItems(towns[i]);	
		}

		currentLocation = rand()%NUMBER_OF_TOWNS;

		player.setGold(STARTING_GOLD);

	}

void Game::giveTownRandomItems(Town& t)
{
	t.getInventory().increaseNumberOf(items[rand()%items.size()],rand()%MAX_STARTING_QUANTITY);
}

//runs garbage and moves items around
void Game::simulateWorld()
{
	for(int i = 0 ; i < MAX_SIMULATED_TRANSACTIONS;i++)
	{
		Town* t1 = &towns[rand()%towns.size()];
		Town* t2 = &towns[rand()%towns.size()];
		Item item = items[rand()%items.size()];
		//it will go through if its a good deal, it will maybe go through if it's a bad deal
		if(t1->getBuyPrice(item)<t2->getSellPrice(item) || (rand()%100 > 80))
		{
			int ammount = rand()%(t1->getInventory().getNumberOf(item));
			t1->buy(item,ammount);
			t2->sell(item,ammount);
		}
	}
}

Town& Game::getCurrentLocation()
{
	return towns[currentLocation];
}

void Game::setCurrentLocation(int loc)
{
	if(loc > 0 && loc < towns.size()&&towns[loc].canTravelTo)
	{
		currentLocation = loc;
		dayCount++;
	}
}

void Game::attemptToBuy(Item i, int ammount)
{
	int cost = getCurrentLocation().getBuyPrice(i)*ammount;
	if(getPlayer().getGold()>=cost)
	{
		getCurrentLocation().buy(i,ammount);
		getPlayer().incrementGold(-cost);
		getPlayer().getInventory().increaseNumberOf(i,ammount);

		HistoryTuple h;
		h.item = i;
		h.numBought = ammount;
		h.numSold = 0;
		h.price = cost;

		std::vector<HistoryTuple>::iterator it;
		it = getPlayer().getHistory().begin();
		getPlayer().getHistory().insert(it, h);
	}
}

void Game::attemptToSell(Item i, int ammount)
{
	if(player.getInventory().getNumberOf(i) >= ammount)
	{
		int cost = getCurrentLocation().getSellPrice(i)*ammount;
		getCurrentLocation().sell(i,ammount);
		getPlayer().incrementGold(cost);
		getPlayer().getInventory().decreaseNumberOf(i,ammount);

		HistoryTuple h;
		h.item = i;
		h.numBought = 0;
		h.numSold = ammount;
		h.price = cost;

		std::vector<HistoryTuple>::iterator it;
		it = getPlayer().getHistory().begin();
		getPlayer().getHistory().insert(it, h);
	}
}