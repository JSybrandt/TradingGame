DROP TABLE IF EXISTS Chat;
DROP TABLE IF EXISTS Inventory;
DROP TABLE IF EXISTS PurchaseHistory;
DROP TABLE IF EXISTS Player;
DROP TABLE IF EXISTS LocationPriceInfo;
DROP TABLE IF EXISTS Item;
DROP TABLE IF EXISTS TravelInfo;
DROP TABLE IF EXISTS Location;


CREATE TABLE Location(
	LocationID int,
	Name varchar(20),
	canTravelTo bool,
	PRIMARY KEY (LocationID)
);

CREATE TABLE TravelInfo(
	StartLoc int,
	EndLoc int,
	Distance int,
	PRIMARY KEY(StartLoc,EndLoc),
	FOREIGN KEY(StartLoc) REFERENCES Location(LocationID),
	FOREIGN KEY(EndLoc) REFERENCES Location(LocationID)
);

CREATE TABLE Item(
	ItemID int,
	Name varchar(20),
	Description varchar(20),
	BasePrice int,
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
	Coin int DEFAULT 1000,
	PRIMARY KEY(PlayerID),
	FOREIGN KEY(CurrentLocation) REFERENCES Location(LocationID),
	UNIQUE(Name)
);

CREATE TABLE Inventory(
	PlayerID int,
	ItemID int,
	Quantity int,
	PRIMARY KEY(PlayerID,ItemID),
	FOREIGN KEY(PlayerID) REFERENCES Player(PlayerID),
	FOREIGN KEY(ItemID) REFERENCES Item(ItemID)
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