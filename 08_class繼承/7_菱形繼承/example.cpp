#include<iostream>
using namespace std;

class Aniaml
{
public:
    int data;
};

//���~�ӡA�䤤Aniaml�������
class Sheep:virtual public Aniaml
{
public:
};

//���~�ӡA�䤤Aniaml�������
class Tuo:virtual public Aniaml
{
public:
};

class SheepTuo:public Sheep, public Tuo
{
public:
};



int main(){
    SheepTuo st;
    //����,�G�q��, �qSheep���~��data, �qTuo���]�~��data
    //st.data=10;
    //�ѨM�覡1 �[�@�ΰ�
    //st.Sheep::data = 100;
    //st.Tuo::data = 200;

    //�ѨM�覡2 ���~��
    st.data=10;
}