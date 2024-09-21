#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//普通函數作為二元謂詞
bool sortBiggerFirst(int a, int b){
    return a>b;
}

//仿函數作為二元謂詞
class MysortBiggerFirst
{
public:
    bool operator()(int a, int b){
        return a > b;
    }
};


int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    //需求找到第一的大於20的數
    //1. 普通函數完成
    //sort(v.begin(), v.end(), sortBiggerFirst);
    //for_each(v.begin(), v.end(), [](int a){cout << a << " ";});
    
    //2. 仿函數完成
    //sort(v.begin(), v.end(), MysortBiggerFirst());
    //for_each(v.begin(), v.end(), [](int a){cout << a << " ";});

    //3. 使用內建函數完成
    sort(v.begin(), v.end(), greater<int>());
    for_each(v.begin(), v.end(), [](int a){cout << a << " ";});
}
