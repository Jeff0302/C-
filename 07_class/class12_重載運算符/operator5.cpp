#include <iostream>
using namespace std;

class Fun
{

public:
    Fun(){
        cout << "�c�y���" << endl;
    };
    ~Fun(){
        cout << "�R�c���" << endl;
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
    //²�ƽե�fun(1, 3)
    cout << fun(1, 3) << endl;
}

