#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <iostream>
#include <fstream>
using std::string;

class Util{
	public:
		static string readFromFile(string filename);
		static std::vector<string> & split(
				const string & s, 
				const std::string delim, 
				std::vector<std::string> & elems);	
		static std::vector<string> split(const string & s, char delim);	
};

#endif
