#include <iostream>
using namespace std;

void swapInt(int &a, int &b)
{
    cout << "普通函數" << endl;
    int temp = a;
    a = b;
    b = temp;
}

void myswap(int &a, int &b)
{
    cout << "普通函數" << endl;
    int temp = a;
    a = b;
    b = temp;
}
//普通函數
void swapChar(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

//函數模板template關鍵字
template<typename T>
void myswap(T &a, T &b)
{
    cout << "函數模板" << endl;
    T temp = a;
    a = b;
    b = temp;
}


int main(){
    int data1 = 10, data2 = 20;
    cout << "data1=" << data1 << "," << "data2=" << data2 << endl;
    //swapInt(data1, data2);
    //myswap(data1, data2);  //自動推導出T為int
    
    //函數模板 和 普通函數都是識別的話，優先調用普通函數
    myswap(data1, data2);
    //用戶顯式指定類型及調用函數模板
    myswap<int>(data1, data2);
    cout << "data1=" << data1 << "," << "data2=" << data2 << endl;

    char data3 = 'a', data4 = 'b';
    cout << "data3=" << data3 << "," << "data4=" << data4 << endl;
    //swapChar(data3, data4);
    myswap<char>(data3, data4);  //自動推導出T為char
    cout << "data3=" << data3 << "," << "data4=" << data4 << endl;
}
