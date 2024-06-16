#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
//string的插入和刪除
//string& insert(int pos, const char* s), 插入字符串 
//string& insert(int pos, const string& s), 插入字符串 
//string& insert(int pos, int n,char c), 在指定位置插入n個字符c 
//string& erase(int pos, int n = npos) , 刪除從pos開始的n個位置 

string str1 = "hello world";
str1.insert(2, "123");
cout << str1 << endl;

str1.erase(2,3);
cout << str1 << endl;

//清空字符串
str1.erase(0, str1.size());
cout << str1.size() << endl;


} 