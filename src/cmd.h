#ifndef CMD_H
#define CMD_H

#include<string>
#include<vector>
using std::string;
using std::vector;

class Cmd{
	public:
		Cmd(){};
		~Cmd(){};
		Cmd(string cmdLine);
		void shift(int offset=0);
		string name(){
			return _args[0];
		}
		int argc(){
			return _args.size() - 1;
		}
	private:
		vector<string> _args;
		int _pos;
};

typedef int (*cmdFunction)(const Cmd&);

#endif
