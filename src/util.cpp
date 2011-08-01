#include "util.h"
#include <vector>
#include <string>
using std::vector;
using std::string;

std::vector<std::string>& Util::split(
		const std::string &s, 
		const std::string delim, 
		std::vector<std::string> &elems) {

	vector<string>::iterator i,j;
	string word = "";
	elems.clear();
	for(i = s.begin(); i != s.end(); i++){
		//find the char s[i] in the delim string, if not 
		// found, will return string::npos
		if(s.find(*i) != string::npos){
			//is delim
			if(word != "")
				elems.push_back(word);
		}else{
			//isn't delim
			word += *i;
		}
	}

    return elems;
}


