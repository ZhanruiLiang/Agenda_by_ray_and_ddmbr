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

		UI();
		~UI();

		void clear();

		void printBanner();
		void setBanner(const string  banner);

		void printPrompt();
		void setPrompt(const string  prompt);

	private:
		string _banner;
		string _prompt;
};

#endif 
