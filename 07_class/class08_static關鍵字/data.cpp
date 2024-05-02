#include <iostream>
using namespace std;

class Data
{
private:
    static int m_num; 

public:
    Data(/* args */);
    ~Data();
    //內中的枚舉屬於靜態成員
    enum T{A, B, C};
    
    static int data; //靜態成員變量(類中聲明)

    //靜態成員函數,屬於類而不屬於對象
    static int getNum();
};

int Data::data = 100; //(類外定義)
int Data::m_num = 10; //(類外定義)

Data::Data(/* args */)
{
}

Data::~Data()
{
}

int Data::getNum()
{
    //靜態函數不能使訪問普通(對象)成員變量
    //cout << "here" << data << endl;
    return m_num;
}
int main(){
    
    cout << Data::T::A << endl;
    //data是靜態成員變量 是屬於類，可以通過類名直接訪問
    cout << Data::data << endl;
    Data d;
    //data是靜態成員變量 是所有對象共享的，可以通過對象名訪問
    d.data = 200;
    cout << Data::data << endl;

    //1. 靜態成員函數屬於類,可以直接通過類名訪問
    //2. 也可以通過對象名訪問(對象共享成員函數)
    cout << "m_num=" <<Data::getNum() << endl;
}


