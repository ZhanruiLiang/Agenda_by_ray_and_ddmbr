#include "ui.h"
#include "osstuff.h"
#include <cstdlib>

UI::UI(){
	output = &std::cout;
	input = &std::cin;
}

void UI::clear(){
	if(output != &std::cout) return;
	if(OSNAME == "windows")
		system("cls");
	else if(OSNAME == "linux")
		system("clear");
}

void UI::printBanner(){
	(*output) << _banner;
}

void UI::setBanner(const string banner){
	_banner = banner;
}

void UI::printPrompt(){
	(*output) << _prompt;
}

void UI::setPrompt(const string prompt){
	_prompt = prompt;
}
