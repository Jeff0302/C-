#include<iostream>
using namespace std;

class Printer
{
private:
    //�N�c�y��ƤΫ����c�y��ƨp����
    Printer(/* args */);
    Printer(const Printer &obj);
    ~Printer();
    //�Ыذߤ@���
    static Printer my_printer; //�����n��
public:
    //���Ѥ@���R�A��k, ���ϥΪ̥i�H�X�ݥ����ߤ@��ҡC
    static Printer& getPrinter()
    {
        return my_printer;
    }

    void print(){
        cout << "���L�F~~" << endl;
    }
};

Printer Printer::my_printer; //���~�w�q

Printer::Printer(/* args */)
{
}

Printer::~Printer()
{
}

int main()
{
    Printer::getPrinter().print();
}
