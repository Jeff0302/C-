#include <iostream>
#include <string>
using namespace std;

int main()
{
    //1. string���c�y���
    //string(const char* s), �ϥΦr�Ŧ�s��l��
    string str1("hello");
    cout << str1 << endl;
    //string(int n, char c), �ϥ�n���r�Ū�l��
    string str2(10, 'a');
    cout << str2 << endl;
    //string(const string &c), �����c�y
    string str3 = str2;
    cout << str3 << endl;

    //2. string�򥻽�Ⱦާ@
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

    //string& assign(const char *s), ��r�Ŧ�s��ȵ���e���r�Ŧ�
    string str7;
    str7.assign("hello str7");
    cout << str7 << endl;

    //string& assign(const char *s), ��r�Ŧ�s���en�Ӧr�šA��ȵ���e���r�Ŧ�
    string str8;
    str8.assign("hello str7", 5);
    cout << str8 << endl;

    //string& assign(const string &s), ��r�Ŧ�s��ȵ���e���r�Ŧ�
    string str9;
    str9.assign(str8);
    cout << str9 << endl;

    //string& assign(int n, char c), ��n���r��c�A�ᵹ��e�r�Ŧ�C
    string str10;
    str10.assign(10, 'b');
    cout << str10 << endl;

     //string& assign(const string &s, int start, int n), �Ns�qstart�}�ln�ӡA�ᵹ�r��
    string str11;
    str11.assign(str10, 1, 5);
    cout << str11 << endl;

    //3. string�s���r�žާ@
    //char& operator[](int n) , �q�L[]�覡���r��
    //char& at(int n), �qat��k���r��
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
        //str12[1000]='G';  //�V�ɡA���߲��`
        str12.at(1000)='G'; //�V�ɡA�߲��`
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}