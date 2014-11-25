// DBAccess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DBConnection.h"

int _tmain(int argc, _TCHAR* argv[])
{
	try {
	
	DBConnection d("162.218.91.84:3306","db1","client","");

	table res = d.runQuery("select * from testTable");

	for(row r : res)
	{
		for(string s : r)
			cout<<s<<" ";
		cout<<endl;
	}
	
} catch (sql::SQLException &e) {
  cout << "# ERR: SQLException in " << __FILE__;
  cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
  cout << "# ERR: " << e.what();
  cout << " (MySQL error code: " << e.getErrorCode();
  cout << ", SQLState: " << e.getSQLState() << " )" << endl;
}

cout << endl;

return EXIT_SUCCESS;

}

