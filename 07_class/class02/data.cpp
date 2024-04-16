#include "data.h"
#include <iostream>
using namespace std;
Data::Data(int data):num(data)
{
}

int Data::getNum()
{
    return num;
}

Data::~Data()
{
}

int main()
{
    Data data(100);
    cout<< data.getNum() << endl;

}

