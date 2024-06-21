#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //1. 默認構造
    vector<int> v1;
    for(int i=0;i<10;i++)
        v1.push_back(i);

    //2.vector(v1.begin()+1, v1.end()-1), 將 v.begin()+1到v.end()-1中間的元素拷貝給本身
    vector<int> v2  = vector(v1.begin()+1, v1.end()-1);
    for_each(v2.begin(), v2.end(), [](auto a){cout << a << endl;});

    //3.vector(n, elem), 構造函數將n個elem拷貝給本身
    vector<int> v3 = vector(10, 1); 
    for_each(v3.begin(), v3.end(), [](auto a){cout << a << " ";});

    //4. 拷貝構造
    vector<int> v4 = v3;
}

