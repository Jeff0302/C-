#include<iostream>
using namespace std;

class Printer
{
private:
    //將構造函數及拷貝構造函數私有化
    Printer(/* args */);
    Printer(const Printer &obj);
    ~Printer();
    //創建唯一實例
    static Printer my_printer; //類中聲明
public:
    //提供一個靜態方法, 讓使用者可以訪問它的唯一實例。
    static Printer& getPrinter()
    {
        return my_printer;
    }

    void print(){
        cout << "打印了~~" << endl;
    }
};

Printer Printer::my_printer; //類外定義

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
