#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

//string to const char*
string str1="hello world";
char* cstr1 = const_cast<char *>(str1.c_str());
cout << cstr1 << endl;

//const char* to string
const char* cstr2 = "aasfsakf";
//string str2(cstr2);
string str2=cstr2;
cout << str2 << endl;

} 