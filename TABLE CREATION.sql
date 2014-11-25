DROP TABLE IF EXISTS Chat;
DROP TABLE IF EXISTS PurchaseHistory;
DROP TABLE IF EXISTS Player;
DROP TABLE IF EXISTS LocationPriceInfo;
DROP TABLE IF EXISTS Item;
DROP TABLE IF EXISTS Location;


CREATE TABLE Location(
	LocationID int,
	Name varchar(20),
	canTravelTo bool,
	PRIMARY KEY (LocationID)
);

CREATE TABLE Item(
	ItemID int,
	ItemName varchar(20),
	ItemDescription varchar(20),
	PRIMARY KEY (ItemID)
);

CREATE TABLE LocationPriceInfo(
	LocationID int,
	ItemID int,
	BuyPrice int,
	SellPrice int,
	PRIMARY KEY(LocationID,ItemID),
	FOREIGN KEY(LocationID) REFERENCES Location(LocationID),
	FOREIGN KEY(ItemID) REFERENCES Item(ItemID)
);

CREATE TABLE Player(
	PlayerID int,
	Name varchar(20),
	CurrentLocation int,
	Coin int,
	numArmor int,
	numCommonSpice int,
	numGroceries int,
	numIron int,
	numLeather int,
	numOil int,
	numPaper int,
	numPearls int,
	numPerfume int,
	numRareSpice int,
	numSalt int,
	numSilk int,
	numSword int,
	numTools int,
	numWax int,
	numWine int,
	PRIMARY KEY(PlayerID),
	FOREIGN KEY(CurrentLocation) REFERENCES Location(LocationID)
);

CREATE TABLE PurchaseHistory(
	PlayerID int,
	LocationID int,
	ItemID int,
	TimeOfPurchase date,
	Quantity int,
	buyPrice int,
	PRIMARY KEY(PlayerID,LocationID,ItemID,TimeOfPurchase),
	FOREIGN KEY(PlayerID) REFERENCES Player(PlayerID),
	FOREIGN KEY(LocationID) REFERENCES Location(LocationID),
	FOREIGN KEY(ItemID) REFERENCES Item(ItemID)
);

CREATE TABLE Chat(
	PlayerID int,
	TimeOfMsg date,
	Message varchar(100),
	PRIMARY KEY(PlayerID,TimeOfMsg),
	FOREIGN KEY(PlayerID) REFERENCES Player(PlayerID)
);