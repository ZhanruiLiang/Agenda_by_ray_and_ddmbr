// =====================================================================================
// 
//       Filename:  encrypt.h
// 
//    Description:  The module to encrypt data
// 
//        Version:  1.0
//        Created:  08/01/2011 04:51:21 PM
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  ddmbr (), iddmbr@gmail.com
//        Company:  
// 
// =====================================================================================
#include<string>
#include<map>
using std::map;
using std::string;

class Encrypt
{
	public:
		Encrypt();

		string encode(const string data);
		string decode(const string data);
	private:
		bool isAllow(char c);
		map<char,char> _encmap, _decmap;
};
