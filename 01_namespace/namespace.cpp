#include <iostream>
using namespace std;

namespace A{
    int a = 10;
}

//命名空間可以嵌套
namespace B{
    int a = 20;
    namespace BB{
        int a = 30;
    }
} 

//命名空間是開放的，可以隨時把新的成員加入已有命名空間中
namespace A{
    int aa = 13;

    //命名空間內函數定義I
    void func(){
        cout << "A命名空間中的func()被調用了" << endl;
    }
    void funcII();
} 

//命名空間內函數定義II
void A::funcII(){
        cout << "A命名空間中的funcII()被調用了" << endl;
}



void test(){
    //命名空間只能在全局範圍定義
    // namespace C{

    // }
}

// int a = 5;
int main()
{
    // int a = 5;
    // cout << "a=" << a << endl;
    cout << "A::a=" << A::a << endl;
    cout << "A::aa=" << A::aa << endl;
    cout << "B::a=" << B::a << endl;
    //命名空間可以嵌套
    cout << "B::BB::a=" << B::BB::a << endl;
    //使用命名空間中的函數
    A::func();
    A::funcII();
    //命名空間給別名
    namespace new_A = A;
    new_A::func();

    //使用命名空間
    using namespace A;
    cout << "a=" << a << endl;
    func();
    
    return 0;
}