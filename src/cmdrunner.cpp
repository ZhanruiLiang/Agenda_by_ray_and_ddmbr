#include "cmdrunner.h"

void CmdRunner::addCmdFunction(
		string const cmdName, 
		cmdFunction cmdFunc){
	_funcs[cmdName] = cmdFunc;
}
