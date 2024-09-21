#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void myPrint(int val , int tmp){
    cout << val + tmp << " ";
}

// class myPrint
// {
// public:
//     void operator()(int a, int temp) const{
//         cout << a + temp << " ";
//     }
// };


int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    //https://hackmd.io/@sss22213/SJUIwOt48
    //適配器1: bind綁定參數
    auto fun = bind(myPrint, std::placeholders::_1, 1000);

    for_each(v.begin(), v.end(), fun);

}
