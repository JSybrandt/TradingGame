#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "mysql_connection.h"
#include "mysql_driver.h"
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include<string>
#include<vector>
using namespace std;
using namespace sql;



typedef std::vector<std::vector<std::string> > table;
typedef std::vector<std::string> row;

// This class is exported from the SQLConnDLL.dll
class  DBConnection {
private:
	Driver *driver;
	Connection *connection;
public:
	DBConnection(SQLString hostName,SQLString dbName,SQLString user="",SQLString pass="");
	~DBConnection();
	table runQuery(SQLString query);

	//table runQuery(string query, vector<string> vals);

};
