#include <iostream>
#include <string>
using namespace std;

int main(){
    //1. �r�Ŧ�����ާ@
    string str1 = "hello";
    string str2 = " string";
    //string& operator+=(const string& s), ����+=�ާ@��
    str1 += str2;
    cout << str1 << endl;


    string str3 = "hello";
    //string& operator+=(const char* s), ����+=�ާ@��
    str3 += " string";
    cout << str3 << endl;

    //string& append(const char* s, int n), ��r�Ŧ�s���en�Ӧr�ųs�����e�r�굲��
    string str4 = "hello";
    str4.append(" string", 4);
    cout << str4 << endl;

    //string& append(const string& s, int pos ,int n), ��r�Ŧ�s���qpos�}�l���en�Ӧr�ųs�����e�r�굲��
    string str5 = "hello";
    str5.append(str3, 5, 7);
    cout << str5 << endl;


    //2. �r�Ŧꪺ�d��M����
    //int find(const string& str, int pos=0) const; //�d��str�Ĥ@���X�{����m�A�qpos��m�}�l�d��
    string str6("111111111111111hello22222222");
    string target("hello");
    cout<< str6.find(target) << endl; //15
    cout<< str6.find(target, 20) << endl;
    //int find(const char* str, int pos=0) const; //�d��str�Ĥ@���X�{����m�A�qpos��m�}�l�d��
    cout<< str6.find("hello") << endl; //15
    cout<< str6.find("hello", 20) << endl;
    
    //string& replace(int pos, int n, const char* str) const; //������e�r�Ŧ�qpos�}�l���en���r�Ŭ�str
    //string& replace(int pos, int n, const string& str) const; //������e�r�Ŧ�qpos�}�l���en���r�Ŭ�str
    string str7("222211112222");
    str7.replace(4,4,"###");
    cout<< str7 << endl;

    string str8 = "www.sex.117114.sex.person.77.com";
    //�ݨD: �N�r�Ŧꤤ�Ҧ���"sex"��***�̽�
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