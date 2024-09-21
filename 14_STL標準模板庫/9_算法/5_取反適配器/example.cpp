#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;


class MyGreaterThan3
{
public:
  bool operator()(int a) {
    return a>3;
  }
};

void test01(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    //https://learn.microsoft.com/zh-tw/cpp/standard-library/functional-functions?view=msvc-170#not_fn
    //找出沒大於3的數    
    vector<int>::iterator it = find_if(v.begin(), v.end(),  not_fn(MyGreaterThan3()));
    if(it!=v.end())
    {
        cout << "第一個沒大於3的數為" << *it << endl;
    }


}





int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);

    sort(v.begin(), v.end(), not_fn(greater<int>()));

    for_each(v.begin(), v.end(), [](int a){cout << a << " ";});

}
