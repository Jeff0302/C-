#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    size(): 返回容器中的元素個數
    empty(): 判斷容器是否為空
    resize(int num): 重新指定容器的長度為num，若容器變長，則默認填充新位置。如果容器變短，則末尾超出長度的元素將被刪除。
    resize(int num, elem): 重新指定容器的長度為num，若容器變長，則以elem填充新位置。如果容器變短，則末尾超出長度的元素將被刪除。
    capacity(): 返回容器的容量
    reserve(int length): 容器預留len個元素長度，預留位置不初始化，元素不可以訪問。

*/
int main(){

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    if (v.empty())
    {
        cout << "容器為空" << endl;
    }
    else
    {
         cout << "容器不為空" << endl;
         cout << "容器size=" << v.size() << endl;
         cout << "容器capacity=" << v.capacity() << endl;
    }
    for_each(v.begin(), v.end(),[](auto a){cout << a << " ";});
    cout << endl; //10 20 30 40

    v.resize(6);
    for_each(v.begin(), v.end(),[](auto a){cout << a << " ";});
    cout << endl;//10 20 30 40 0 0

    v.resize(8, 5);
    for_each(v.begin(), v.end(),[](auto a){cout << a << " ";});
    cout << endl;//10 20 30 40 0 0 5 5


    vector<int> v2(1000,1);
    //resize不會改變容量
    v2.resize(10);
    cout << "v2的容量=" << v2.capacity() << endl;

    //使用swap收縮容量
    /*
        vector<int> v4 = v2;
        cout << "v4的容量=" << v4.capacity() << endl;
        v4.swap(v2);
        cout << "v2的容量=" << v2.capacity() << endl;
    */
    //用拷貝構造的匿名容器對象交換
    vector<int>(v2).swap(v2);
    cout << "v2的容量=" << v2.capacity() << endl;

}