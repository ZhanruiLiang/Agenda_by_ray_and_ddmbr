// =====================================================================================
// 
//       Filename:  logmgr.h
// 
//    Description:  TODO
// 
//        Version:  1.0
//        Created:  08/01/2011 11:34:59 AM
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  ddmbr (), iddmbr@gmail.com
//        Company:  
// 
// =====================================================================================
#include<string>
#include "time.h"

using std::string;
class LogMgr
{
public:
	//Constructor
	LogMgr();

	//Record the currently logged in user
	int Record(string Username);

	//Query the user currently logged in
	string Query();

	//Determine whether the action to be perform is valid
	//according to login info
	int Validate();

private:
	//Record Last login time
	Time LastLogin;
	
	//Record the username of whom currently logged in
	string Username;
};
