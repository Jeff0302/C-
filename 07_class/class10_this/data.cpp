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
    
    //const�׹��������,�׹����Othis���w���V�����s��, ��ܦ�����Ƥ����i�H�קﴶ�q�����ܶq�C
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
    //�`��H�u��ե�const�׹������
    cout << ob4.getNum() << endl;


}

