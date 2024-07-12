#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void show_list(list<int> &lst){
    for (list<int>::iterator iter = lst.begin();iter!=lst.end();iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

}


int main(){
    list<int> t;
    t.push_back(10);
    t.push_back(20);
    t.push_back(30);
    t.push_back(40);
    show_list(t); //10 20 30 40

    //報錯，不支持迭代器 + n, 只有隨機訪問迭代器支援
    //t.insert(t.begin()+ 2, 4, 1);
    //list容器迭代器是雙向迭代器
    list<int>::iterator it = t.begin();
    //++ 隨機訪問迭代器 和 雙向迭代器 都支持
    it++;
    t.insert(it, 4, 1);

    show_list(t);

    //鏈表反轉
    t.reverse();
    show_list(t);

    //sort是系統提供的算法，僅支持隨機訪問迭代器
    //list容器不能使用系統算法，但list容器會自己提供算法
    //sort(t.begin(), t.end());
    t.sort();
    show_list(t);







}
