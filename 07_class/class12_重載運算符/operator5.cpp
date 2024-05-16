#include <iostream>
using namespace std;

class Fun
{

public:
    Fun(){
        cout << "構造函數" << endl;
    };
    ~Fun(){
        cout << "析構函數" << endl;
    };
    int add(int x, int y){
        return x+y;
    };
    int operator()(int x, int y){
        return add(x, y);
    };
};

int main()
{
    Fun fun;
    cout << fun.add(1,3) << endl;
    //簡化調用fun(1, 3)
    cout << fun(1, 3) << endl;
}

