#include<iostream>
using namespace std;

class Data
{
private:
    /* data */
public:
    int m_num = 50;
    void setNum(int num)
    {
        m_num = num;
    };
    
    //const修飾成員函數,修飾的是this指針指向的內存區, 表示成員函數內不可以修改普通成員變量。
    int getNum() const
    {
        return m_num;
    };

};

int main()
{
    Data ob1;
    ob1.setNum(10);
    cout << "ob1.m_num=" << ob1.m_num << endl;

    Data ob2;
    ob2.setNum(20);
    cout << "ob2.m_num=" << ob2.m_num << endl;

    Data ob3;
    ob3.setNum(30);
    cout << "ob3.m_num=" << ob3.m_num << endl;

    const Data ob4;
    //常對象只能調用const修飾的函數
    cout << ob4.getNum() << endl;


}

