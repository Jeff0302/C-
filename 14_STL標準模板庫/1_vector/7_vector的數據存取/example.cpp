#include <vector>
#include <iostream>
using namespace std;

/*
1. at(int idx): 返回索引idx所指的數據，如果idx越界，拋出out_of_range異常
2. operator[]: 返回索引idx所指的數據，如果idx越界，運行直接報錯
3. font(): 返回容器第一個元素。
4. back(): 返回容器最後一個元素。

*/
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "at(1)= " << v.at(1) << endl; //20
    cout << "v[1]= " << v[1] << endl;   //20
    cout << "v.front()= " << v.front() << endl; //10
    cout << "v.back()= " << v.back() << endl; //40
}
