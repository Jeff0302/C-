#include <iostream>
using namespace std;
/*
class Data
{
private:
    int num;
public:

    Data(int num):num(num){
        cout << "num=" << this->num << "�c�y�F" << endl;
    }

    void showData(){
        cout << "num=" << this->num << endl;
    }
    ~Data(){
        cout << "num=" << this->num << "�R�c�F" << endl;
    }
};


class Smartpointer
{
public:
    Data *p;
    Smartpointer(Data *p){
        this->p = p;
    }
    ~Smartpointer(){
        // �ˬd������w�ҫ��V�Ŷ��O�_������
        if(p!=NULL)
        {
            delete p;
            p = NULL;
        }
    }

    Data* operator->(){
        return this->p;
    }
    Data& operator*(){
        return *(this->p);
    }
    
};

int main()
{
    // ���D: ��new�ӽа�ϪŶ���A�i��ѰO����C
    // Data *p = new Data(10);
    // p->showData();

    // �ѨM�覡 : ������w�۰������ϪŶ�
    // ����������w��H -> ��e�@�ΰ쵲����۰�����
    Smartpointer pointer(new Data(10));
    // pointer.p->showData();
    // �p��²�ƽեΪ��覡pointer->showData(); ���� -> 
    // (pointer.operator->() )-> showData();  ���R: pointer.operator->() )�ݭn��^Data��H�����w
    // ²�ƽեΤ覡
    pointer->showData();

    (*(pointer.p)).showData();
    // �p��²�ƽեΪ��覡(*pointer).showData(); ���� *
    // (pointer.operator*()).showData();  ���R: pointer.operator*()�ݭn��^Data��H���ޥ�
    (*pointer).showData();


}

*/