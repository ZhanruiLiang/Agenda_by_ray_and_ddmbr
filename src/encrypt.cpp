// =====================================================================================
// 
//       Filename:  encrypt.cpp
// 
//    Description:  The implentment of the class Encrypt
// 
//        Version:  1.0
//        Created:  08/01/2011 04:54:57 PM
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  ddmbr, iddmbr@gmail.com
//        Website:  http:\\ddmbr.tk
//         School:  Sun-Yat-Sen University
// 
// =====================================================================================

#include "encrypt.h"

const char mapping[][2] = 
{{'!','F'},{'#','S'},{'\'','\''},{'$','R'},{'%','#'},{'&','`'},{'(','('},{')','j'},{'*','K'},{'+','s'},{',','!'},{'-','$'},{'.','W'},{'/','x'},{'0','m'},{'1',')'},{'2','9'},{'3','r'},{'4','Z'},{'5','8'},{'6','B'},{'7','7'},{'8','e'},{'9','Y'},{':','a'},{';','+'},{'<','D'},{'=','o'},{'>','I'},{'?','N'},{'@','L'},{'A','|'},{'B','/'},{'C','^'},{'D',']'},{'E','M'},{'F','{'},{'G','p'},{'H','G'},{'I','U'},{'J','w'},{'K','6'},{'L','5'},{'M','H'},{'N','c'},{'O','g'},{'P','3'},{'Q','C'},{'R','k'},{'S','<'},{'T','_'},{'U','&'},{'V','Q'},{'W','u'},{'X','4'},{'Y','%'},{'Z',':'},{'[','P'},{'\\','0'},{']','t'},{'^','~'},{'_','\\'},{'`',','},{'a','T'},{'b','i'},{'c','2'},{'d','A'},{'e',';'},{'f','f'},{'g','V'},{'h','d'},{'i','v'},{'j','J'},{'k','-'},{'l','E'},{'m','l'},{'n','='},{'o','['},{'p','X'},{'q','}'},{'r','q'},{'s','y'},{'t','h'},{'u','b'},{'v','O'},{'w','1'},{'x','n'},{'y','z'},{'z','@'},{'{','>'},{'|','*'},{'}','?'},{'~','.'}};

Encrypt::Encrypt(){
	int i,n;
	n = (sizeof mapping)/(sizeof mapping[0]);
	for(i = 0; i < n; i++){
		_encmap[mapping[i][0]] = mapping[i][1];
		_decmap[mapping[i][1]] = mapping[i][0];
	}
}
string Encrypt::encode(const string data)
{
	string result = data;
	for(int i = 0; i < result.size(); i++)
		result[i] = _encmap[result[i]];
	return result;
}
string Encrypt::decode(const string data)
{
	string result = data;
	for(int i = 0; i < result.size(); i++)
		result[i] = _decmap[result[i]];
	return result;
}
bool Encrypt::isAllow(char c){
	return (_encmap.count(c) > 0);
}
