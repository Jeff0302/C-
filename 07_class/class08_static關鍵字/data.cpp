#include <iostream>
using namespace std;

class Data
{
private:
    static int m_num; 

public:
    Data(/* args */);
    ~Data();
    //�������T�|�ݩ��R�A����
    enum T{A, B, C};
    
    static int data; //�R�A�����ܶq(�����n��)

    //�R�A�������,�ݩ����Ӥ��ݩ��H
    static int getNum();
};

int Data::data = 100; //(���~�w�q)
int Data::m_num = 10; //(���~�w�q)

Data::Data(/* args */)
{
}

Data::~Data()
{
}

int Data::getNum()
{
    //�R�A��Ƥ���ϳX�ݴ��q(��H)�����ܶq
    //cout << "here" << data << endl;
    return m_num;
}
int main(){
    
    cout << Data::T::A << endl;
    //data�O�R�A�����ܶq �O�ݩ����A�i�H�q�L���W�����X��
    cout << Data::data << endl;
    Data d;
    //data�O�R�A�����ܶq �O�Ҧ���H�@�ɪ��A�i�H�q�L��H�W�X��
    d.data = 200;
    cout << Data::data << endl;

    //1. �R�A��������ݩ���,�i�H�����q�L���W�X��
    //2. �]�i�H�q�L��H�W�X��(��H�@�ɦ������)
    cout << "m_num=" <<Data::getNum() << endl;
}


