#include <deque>
#include <iostream>
using namespace std;


void printDequeInt(deque<int> &deq){

    for(deque<int>::iterator iter=deq.begin();iter!=deq.end();iter++){
        cout << *iter << " ";
    }
    cout << endl;
}

int main(){
    deque<int> d;
    //1. 尾部插入
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    //2. 頭部插入
    d.push_front(40);
    d.push_front(50);
    d.push_front(60);
    printDequeInt(d);

    //3. 頭部刪除
    d.pop_front();
    //4. 尾部刪除
    d.pop_back();
    printDequeInt(d);

    //5. 判斷容器是否為空
    if(d.empty()){
        cout << "d容器為空" << endl;
    }
    else
    {
         cout << "d容器非空, size= " << d.size() << endl;
    }
    
    //6. []訪問元素
    cout << "d[2]= " << d[2] << endl;
    cout << "d[2]= " << d.at(2) << endl;
    cout << "頭元素= " << d.front() << endl;
    cout << "尾元素= " << d.back() << endl;

    //7. 插入數據
    d.insert(d.begin()+1, 4, 4);
    printDequeInt(d);

    //8. 清空容器數據
    d.clear();
    cout << "d size= " << d.size() << endl;
}