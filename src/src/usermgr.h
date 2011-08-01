#ifndef USERMGR_H
#define USERMGR_H

#include "user.h"
#include <QtXml>

class UserMgr{
public:
	UserMgr();
	int Add(string name, string epasswd);
	int Delete(string name);
	string Query(string userName);
	int changePasswd(string oldpasswd, string newpasswd);
private:
	QDomDocument doc*;
};

#endif
