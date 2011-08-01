#ifndef CMDRUNNER_H
#define CMDRUNNER_H

#include "cmd.h"
#include <string>
#include <map>

using std::map;

using std::string;

class CmdRunner{
	public:
		//associate a cmd name with a function, note that a name can 
		// be associated with only a function, the previous function,
		// if exist, will be ignored.
		static void addCmdFunction(
				const string cmdName, // function name
				cmdFunction cmdFunc //function pointer
				);
		//run a command, attention the command with name cmd should
		//	be associated with a function first
		static int run(const Cmd& cmd);

	private:
		static map<string, cmdFunction> _funcs;
};

#endif
