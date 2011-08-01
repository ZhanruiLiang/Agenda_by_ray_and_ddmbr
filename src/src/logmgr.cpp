// =====================================================================================
// 
//       Filename:  logmgr.cpp
// 
//    Description:  TODO
// 
//        Version:  1.0
//        Created:  08/01/2011 03:38:15 PM
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  ddmbr, iddmbr@gmail.com
//        Website:  http:\\ddmbr.tk
//         School:  Sun-Yat-Sen University
// 
// =====================================================================================
#include "LogMgr.h"

LogMgr::LogMgr()
{
	Username = "";
	LastLogin = NULL;
}
string LogMgr::Query()
{
	if(Validate())
		return Username;
	else
		return "Nobody currently logged in.";
}
int LogMgr::Validate()
{
	//check if logged in
	if(Username == "")
		return 1;           //Haven't log in
	//check if out of date
	if(dif(LastLogin, time(NULL)) > 15 * 60)
		return 2;           //Time out
}
int LogMgr::Record(string Username)
{
	this->Username = Username;
	time(LastLogin);
}
