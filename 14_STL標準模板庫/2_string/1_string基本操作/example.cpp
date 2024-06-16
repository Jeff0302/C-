#include <iostream>
#include <string>
using namespace std;

int main()
{
    //1. string篶硑ㄧ计
    //string(const char* s), ㄏノ才﹃s﹍て
    string str1("hello");
    cout << str1 << endl;
    //string(int n, char c), ㄏノn才﹍て
    string str2(10, 'a');
    cout << str2 << endl;
    //string(const string &c), ī篶硑
    string str3 = str2;
    cout << str3 << endl;

    //2. string膀セ结巨
    string str4;
    //string& operator=(const string &s)
    str4 = str1;
    cout << str4 << endl;

    string str5;
    //string& operator=(const char* s)
    str5 = "hello";
    cout << str5 << endl;

    string str6;
    //string& operator=(char s)
    str6 = 'h';
    cout << str6 << endl;

    //string& assign(const char *s), р才﹃s结倒讽玡才﹃
    string str7;
    str7.assign("hello str7");
    cout << str7 << endl;

    //string& assign(const char *s), р才﹃s玡n才结倒讽玡才﹃
    string str8;
    str8.assign("hello str7", 5);
    cout << str8 << endl;

    //string& assign(const string &s), р才﹃s结倒讽玡才﹃
    string str9;
    str9.assign(str8);
    cout << str9 << endl;

    //string& assign(int n, char c), ノn才c结倒讽玡才﹃
    string str10;
    str10.assign(10, 'b');
    cout << str10 << endl;

     //string& assign(const string &s, int start, int n), 盢s眖start秨﹍n结倒﹃
    string str11;
    str11.assign(str10, 1, 5);
    cout << str11 << endl;

    //3. string才巨
    //char& operator[](int n) , 硄筁[]よΑ才
    //char& at(int n), 硄atよ猭才
    string str12("123456");
    cout << "str12[1]=" <<str12[1] << endl;
    cout << "str12.at(1)=" <<str12.at(1) << endl;
    
    str12[1]='A';
    cout << "str12[1]=" <<str12[1] << endl;
    str12.at(2)='B';
    cout << "str12.at(2)=" <<str12.at(2) << endl;
    cout << "str12.at(1)=" << str12 << endl;
    try
    {
        //str12[1000]='G';  //禫ぃ┻钵盽
        str12.at(1000)='G'; //禫┻钵盽
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}