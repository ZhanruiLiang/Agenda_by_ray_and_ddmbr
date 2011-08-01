#ifndef CMD_H
#define CMD_H

#include<string>
#include<vector>
using std::string;
using std::vector;

class Cmd{
	public:
		string name;
		vector<string> args;

		Cmd(){};
		~Cmd(){};
		Cmd(string cmdLine);
};

typedef int (*cmdFunction)(const Cmd&);

#endif
