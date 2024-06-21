#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


typedef void (*fp1)(int a);
typedef void (*fp2)();
/*
1. insert(const_iterator pos, int count, ele): ���N�����V��mpos���Jcount�ƶq��ele�����C
2. push_back(ele): �������J����ele�C
3. pop_back(): �R���̫�@�Ӥ����C
4. ease(const_iterator start, onst_iterator end): �R�����N���qstart��end�϶��������C
5. ease(const_iterator pos): �R�����N���ҫ��V�������C
6. clear(): �R���e���Ҧ������C

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
    // T�|�۰ʱ���vector<int>::iterator
    for_each_cb(v.begin(), v.end(),[](int a){cout << a << " ";},[](){cout << endl;});

    v.pop_back();
    for_each_cb(v.begin(), v.end(),[](int a){cout << a << " ";},[](){cout << endl;});

    v.erase(v.begin()+ 4, v.end());
    for_each_cb(v.begin(), v.end(),[](int a){cout << a << " ";},[](){cout << endl;});
    
    v.clear();
    for_each_cb(v.begin(), v.end(),[](int a){cout << a << " ";},[](){cout << endl;});






    
    



}


