#include <iostream>
#include <cstring>
using namespace std;

int main(){

    // int data=0;
    // cin>>data;
    // cout << "data=" << data << endl;

    // char ch;
    // cin>>ch;
    // cout << "ch=" << ch << endl;

    //1. get��k����@�Ӧr��
    // char ch2 = cin.get();
    // cout << "ch2=" << ch2 << endl;

    //�J��Ů�^���������
    // char name[128]="";
    // cin >> name;   
    // cout << "name=" << name << endl;

    //2. getline()��k����@��
    //   �i�H����N�Ů檺�r�Ŧ�
    // char name2[128]="";
    // cin.getline(name2, sizeof(name2));
    // cout << "name2=" << name2 << endl;

    //3. cin.ignore()��k
    //   �����en�Ӧr��
    /*
    char name3[128]="";
    cin.ignore(3);
    //cin>>name3;
    //cin.getline(name3, sizeof(name3)-3);
    cout << "name3=" << name3 << endl;
    */

    //4. cin.putback()��k
   //   ��^�w�İ�
   /*
    char name4=0;
    char name4_2[128]="";
    
    name4 = cin.get();                      //��Jhello
    cout << "name4=" << name4 << endl;      //h
    
    cin.putback(name4);
    cin.getline(name4_2, sizeof(name4_2));     
    cout << "name4_2=" << name4_2 << endl;  //hello
    */
    //5. cin.peek()
    //   ���s�w�İϪ��ƾ�
    char name5=0;
    char name5_2[128]="";
    
    name5 = cin.peek();                     
    cout << "name5=" << name5 << endl;       //h

    cin.getline(name5_2, sizeof(name5_2));   //��Jhello
    cout << "name5_2=" << name5_2 << endl;   //hello


}