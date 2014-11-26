// SQLConnDLL.cpp : Defines the exported functions for the DLL application.
//

#include "DBConnection.h"


class FAILED_DRIVER:public exception{};


// This is the constructor of a class that has been exported.
// see SQLConnDLL.h for the class definition
DBConnection::DBConnection(SQLString hostName, SQLString dbName, SQLString user,SQLString pass)
{
	driver = get_driver_instance();
	if(driver == NULL)
		throw new FAILED_DRIVER;

	connection = driver->connect(hostName,user,pass);
	connection->setSchema(dbName);
}

DBConnection::~DBConnection()
{
	delete connection;
}

table DBConnection::runQuery(SQLString query)
{
	table result;
	sql::Statement *stmt = connection->createStatement();
	sql::ResultSet *res = stmt->executeQuery(query);

	ResultSetMetaData *res_meta = res -> getMetaData();
	int nColumns = res_meta->getColumnCount();
	if(nColumns > 0)
	{
		while(res->next())
		{
			row r;
			for(int i = 1; i <= nColumns;i++)
				r.push_back(res->getString(i).c_str());
			result.push_back(r);
		}
	}

	delete res;
	delete stmt;

	return result;
}

//table DBConnection::runQuery(string query, vector<string> vals)
//{
//	table result;
//	sql::PreparedStatement *stmt;
//	connection->setAutoCommit(true);
//	stmt = connection->prepareStatement(query);
//	for(int i = 0; i < vals.size();i++)
//	{
//		stmt->setString(i+1,vals[i]);
//	}
//	sql::ResultSet *res = stmt->executeQuery(query);
//	ResultSetMetaData *res_meta = res -> getMetaData();
//	int nColumns = res_meta->getColumnCount();
//	if(nColumns > 0)
//	{
//		while(res->next())
//		{
//			row r;
//			for(int i = 1; i <= nColumns;i++)
//				r.push_back(res->getString(i).c_str());
//			result.push_back(r);
//		}
//	}
//
//	delete res;
//	delete stmt;
//
//	return result;
//}
