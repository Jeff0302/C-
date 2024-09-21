#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;


int main(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    
    //將v1內的每個元素+1000
    //for_each(v1.begin(), v1.end(), [&](int &a){ a = a + 1000;});
    //transform可以用於將一個容器的數據轉換(映射)並保存至另一個容器
    //將v1內的每個元素+1000保存到另一個容器
    vector<int> v2;
    v2.resize(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), [](int a)->int{ return 1000+a;});
    for_each(v2.begin(), v2.end(), [](int a){cout << a << " ";});
}