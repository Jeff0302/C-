#include <iostream>
#include <string>
using namespace std;

int main(){
    //1. 才﹃钡巨
    string str1 = "hello";
    string str2 = " string";
    //string& operator+=(const string& s), 更+=巨才
    str1 += str2;
    cout << str1 << endl;


    string str3 = "hello";
    //string& operator+=(const char* s), 更+=巨才
    str3 += " string";
    cout << str3 << endl;

    //string& append(const char* s, int n), р才﹃s玡n才硈钡讽玡﹃挡Ю
    string str4 = "hello";
    str4.append(" string", 4);
    cout << str4 << endl;

    //string& append(const string& s, int pos ,int n), р才﹃sい眖pos秨﹍玡n才硈钡讽玡﹃挡Ю
    string str5 = "hello";
    str5.append(str3, 5, 7);
    cout << str5 << endl;


    //2. 才﹃琩т㎝蠢传
    //int find(const string& str, int pos=0) const; //琩тstr材Ω瞷竚眖pos竚秨﹍琩т
    string str6("111111111111111hello22222222");
    string target("hello");
    cout<< str6.find(target) << endl; //15
    cout<< str6.find(target, 20) << endl;
    //int find(const char* str, int pos=0) const; //琩тstr材Ω瞷竚眖pos竚秨﹍琩т
    cout<< str6.find("hello") << endl; //15
    cout<< str6.find("hello", 20) << endl;
    
    //string& replace(int pos, int n, const char* str) const; //蠢传讽玡才﹃眖pos秨﹍玡n才str
    //string& replace(int pos, int n, const string& str) const; //蠢传讽玡才﹃眖pos秨﹍玡n才str
    string str7("222211112222");
    str7.replace(4,4,"###");
    cout<< str7 << endl;

    string str8 = "www.sex.117114.sex.person.77.com";
    //惠―: 盢才﹃い┮Τ"sex"ノ***姜
    cout << str8.find("tuo") << endl;
    int curr_pos=0;
    while (1)
    {
        curr_pos = str8.find("sex", curr_pos);
        if(curr_pos<str8.size())
        {
            str8.replace(curr_pos, 3, "***");
        }
        else if(curr_pos==-1)
        {
            break;
        }
        
    }
    cout << str8 << endl;
    

}