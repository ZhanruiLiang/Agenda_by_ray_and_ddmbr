#include "cmdrunner.h"

void CmdRunner::addCmdFunction(
		string const cmdName, 
		cmdFunction cmdFunc){
	_funcs[cmdName] = cmdFunc;
}

int CmdRunner::run(const Cmd & cmd){
	return (*(_funcs[cmd.name()]))(cmd);
}
