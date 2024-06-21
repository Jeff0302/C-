#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //單端動態數組vector 類模板 
    vector<int> v; //v就是一個具體的vector容器
    
    //push_back 尾部插入
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    v.push_back(400);

    //訪問數據
    //定義一個迭代器存儲 v的起始位置
    //vector<int>::iterator beginIt = v.begin();
    //定義一個迭代器存儲 v的結束位置
    //vector<int>::iterator endIt = v.end();

    
    //for循環遍歷 方式1 
    // for (;  beginIt!=endIt ; beginIt++)
    // {
    //     cout <<*beginIt << endl;
    // }
    // 推薦遍歷方式
    // for (vector<int>::iterator iter=v.begin();  iter!=v.end() ; iter++)
    // {
    //     cout <<*iter << endl;
    // }

    //for循環遍歷 方式2 
    // for(int i=0;i<v.size();i++)
    // {
    //     cout << "v[" << i <<"]=" << v[i] << endl;
    // }
    
    //STL提供的算法來遍歷容器(須包含頭文件 algorithm)
    //for_each 從容器的起始 ---> 結束 ，逐個元素取出
    for_each(v.begin(), v.end(), [](int a){cout<< a << endl;});

}