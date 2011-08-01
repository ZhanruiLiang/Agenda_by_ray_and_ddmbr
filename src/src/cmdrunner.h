#ifndef CMDRUNNER_H
#define CMDRUNNER_H

#include "cmd.h"
#include <string>

using std::string;

class CmdRunner{
	public:
		static void addCmdFunction(string cmdName, cmdFunction cmdFunc);
		static int run(Cmd cmd);
};

#endif
