#include "data.h"
#include <iostream>
using namespace std;

Data::Data()
{
    num = 0;
    cout << "無參構造num=" << num << endl;
    
}

Data::Data(int data)
{
    num = data;
    cout << "有參構造num=" << num << endl;
}

Data::Data(const Data &data)
{
    num = data.num;
    cout << "拷貝構造num=" << num << endl;
}


Data::~Data()
{
    cout << "析構~~~"<< num << endl;
}

int main(){
    //調用無參構造
    Data a;
    //調用有參構造
    Data b(10);
    //調用拷貝構造
    //如果用戶不實現拷貝構造，系統將調用默認的拷貝構造
    //默認的拷貝構造: 單純的整體賦值(淺拷貝)
    //如果用戶實現了拷貝構造，系統將調用用戶實現的拷貝構造
    //拷貝構造的調用形式1(隱式調用)
    Data c(b);
    //拷貝構造的調用形式2(顯式調用)
    Data d = Data(b);
    //拷貝構造的調用形式3(隱式轉換調用)
    Data e = b;
    //匿名構造
    Data(20); //結束馬上析構

}