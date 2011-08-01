#include "ui.h"
#include "usermgr.h"
#include "meetingmgr.h"
#include "cmd.h"
#include "cmdrunner.h"
#include "util.h"

//the managers' pointer
MeetingMgr* meetingMgr = NULL;
UserMgr* userMgr = NULL;
// the ui's pointer
UI* ui = NULL;
//the quit flag
bool quit_flag = false;


//cmd functions
//	int (*cmdFunction)(const Cmd &);
int dummy(const Cmd& cmd){
	(*ui.output) << "I'm the dummy function of " << cmd.name
		<< " with " << cmd.args.size() << " arguments.\n";
	return 0;
}

int help(const Cmd& cmd){
	(*ui.output) << Util.readFromFile("help");
	return 0;
}

int quit(const Cmd& cmd){
	quit_flag = true;
}

int main(int argc, char* argv[]){
	meetingMgr = new MeetingMgr();
	userMgr = new UserMgr();
	ui = new UI();

	//init the ui
	ui.input = *cin;
	ui.output = *cout;

	//link functions
	CmdRunner.addCmdFunction("help", &help);
	CmdRunner.addCmdFunction("login", &dummy);
	CmdRunner.addCmdFunction("quit", &quit);

	//begin main loop
	while(!quit_flag){
		ui.clear();
		ui.setBanner(Util.readFromFile(string("welcome"));
		ui.setPrompt("$>");

		ui.printBanner();
		ui.printPrompt();

		string cmdline;
		std::getline(*ui.input, cmdline);
		Cmd cmd(cmdline);
		CmdRunner.run(cmd);
	}
	return 0;
}
