#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> split(string& source ,string rep){
   int pos = 0;
   vector<string> result;

   while (1)
   {
      int end_pos = source.find(",", pos);
      string temp;
      if(end_pos!=-1)
      {
         temp = source.substr(pos, end_pos-pos);
         result.push_back(temp);
         pos= end_pos+1;
     
      }
      else
      {
         temp = source.substr(pos, source.size()-pos);
         result.push_back(temp);
         break;
      }
   }

   return result;
};

int main(){
//1. string比較操作
//<時返回-1，>時返回1，等於時返回0;
//int compare(const string& s) const; 與字符串s比較
//int compare(const char* s) const; , 與字符串s比較


string str1="hehe";
string str2="haha";
cout << str1.compare(str2) << endl; //1
cout << str1.compare("hehe") << endl; //0

//2. string子串
//string substr(int pos=0; int n = npos) const; 返回從pos開始的n個字符組成的字符串
string str3 = "hello string";
cout << str3.substr(0, 5) << endl;


//案例: 將,分割的所有字符串提取出來
string str4 = "12,-67,-40,-22,30.8,6";
vector<string> result = split(str4,",");
for_each(result.begin(), result.end(),[](string s){ cout << s << endl; });
}

