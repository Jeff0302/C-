#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
//string�����J�M�R��
//string& insert(int pos, const char* s), ���J�r�Ŧ� 
//string& insert(int pos, const string& s), ���J�r�Ŧ� 
//string& insert(int pos, int n,char c), �b���w��m���Jn�Ӧr��c 
//string& erase(int pos, int n = npos) , �R���qpos�}�l��n�Ӧ�m 

string str1 = "hello world";
str1.insert(2, "123");
cout << str1 << endl;

str1.erase(2,3);
cout << str1 << endl;

//�M�Ŧr�Ŧ�
str1.erase(0, str1.size());
cout << str1.size() << endl;


} 