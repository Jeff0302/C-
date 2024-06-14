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

    //1. get方法獲取一個字符
    // char ch2 = cin.get();
    // cout << "ch2=" << ch2 << endl;

    //遇到空格回車結束獲取
    // char name[128]="";
    // cin >> name;   
    // cout << "name=" << name << endl;

    //2. getline()方法獲取一行
    //   可以獲取代空格的字符串
    // char name2[128]="";
    // cin.getline(name2, sizeof(name2));
    // cout << "name2=" << name2 << endl;

    //3. cin.ignore()方法
    //   忽略前n個字符
    /*
    char name3[128]="";
    cin.ignore(3);
    //cin>>name3;
    //cin.getline(name3, sizeof(name3)-3);
    cout << "name3=" << name3 << endl;
    */

    //4. cin.putback()方法
   //   放回緩衝區
   /*
    char name4=0;
    char name4_2[128]="";
    
    name4 = cin.get();                      //輸入hello
    cout << "name4=" << name4 << endl;      //h
    
    cin.putback(name4);
    cin.getline(name4_2, sizeof(name4_2));     
    cout << "name4_2=" << name4_2 << endl;  //hello
    */
    //5. cin.peek()
    //   偷窺緩衝區的數據
    char name5=0;
    char name5_2[128]="";
    
    name5 = cin.peek();                     
    cout << "name5=" << name5 << endl;       //h

    cin.getline(name5_2, sizeof(name5_2));   //輸入hello
    cout << "name5_2=" << name5_2 << endl;   //hello


}