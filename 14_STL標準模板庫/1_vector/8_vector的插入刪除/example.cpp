#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


typedef void (*fp1)(int a);
typedef void (*fp2)();
/*
1. insert(const_iterator pos, int count, ele): 迭代器指向位置pos插入count數量的ele元素。
2. push_back(ele): 尾部插入元素ele。
3. pop_back(): 刪除最後一個元素。
4. ease(const_iterator start, onst_iterator end): 刪除迭代器從start到end區間的元素。
5. ease(const_iterator pos): 刪除迭代器所指向的元素。
6. clear(): 刪除容器所有元素。

*/

template<typename T>
void for_each_cb(T begin, T end, fp1 f1, fp2 f2)
{
    for_each(begin, end, f1);
    f2();
}


int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.insert(v.end(), 10, 100);
    //for_each_cb<vector<int>::iterator>(v.begin(), v.end(),[](int a){cout << a << " ";},[](){cout << endl;});
    // T會自動推導vector<int>::iterator
    for_each_cb(v.begin(), v.end(),[](int a){cout << a << " ";},[](){cout << endl;});

    v.pop_back();
    for_each_cb(v.begin(), v.end(),[](int a){cout << a << " ";},[](){cout << endl;});

    v.erase(v.begin()+ 4, v.end());
    for_each_cb(v.begin(), v.end(),[](int a){cout << a << " ";},[](){cout << endl;});
    
    v.clear();
    for_each_cb(v.begin(), v.end(),[](int a){cout << a << " ";},[](){cout << endl;});






    
    



}


