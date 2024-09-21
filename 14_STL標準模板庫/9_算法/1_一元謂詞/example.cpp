#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//普通函數作為一元謂詞
bool greaterThan20(int a){
    return a>20;
}

//仿函數作為一元謂詞
class MygreaterThan20
{
public:
    bool operator()(int a){
        return a > 20;
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
    //普通函數完成
     vector<int>::iterator it = find_if(v.begin(), v.end(), MygreaterThan20());
     if(it!=v.end())
     {
        cout << "第一個大於20的數為" << *it << endl;
     }


}
