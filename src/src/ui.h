#ifndef UI_H
#define UI_H

#include<iostream>
#include<string>

using std::istream;
using std::ostream;
using std::ifstream;
using std::ofstream;
using std::string;

class UI{
	public:
		ostream * output;
		istream * input;

		void clear();

		void printBanner();
		void setBanner(string banner);

		void printPrompt();
		void setPrompt(string Prompt);
};

#endif 
