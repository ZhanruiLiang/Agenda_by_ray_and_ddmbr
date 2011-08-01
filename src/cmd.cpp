#include "cmd.h"
#include <sstream>
#include <vector>
#include <string>
#include "util.h"
using std::vector;
using std::string;

Cmd::Cmd(string cmdLine){
	Util::split(cmdLine, " \t", _args);
	_pos = 1;
	
}
