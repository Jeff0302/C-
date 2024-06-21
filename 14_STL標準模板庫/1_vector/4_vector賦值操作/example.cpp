#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> v1(10, 1);
    vector<int> v2(10, 0);
    vector<int> v3(5, 9);
    //1. assign(beg, end): �N[beg, end]�϶������ƾګ�����ȵ������C
    v2.assign(v1.begin(), v1.end()-1);
    for_each(v2.begin(), v2.end(), [](auto a){cout<<a<<" ";});
    cout << endl;
    
    //2. assign(n, elem): �Nn��elem������ȵ������C
    v2.assign(8, 8);
    for_each(v2.begin(), v2.end(), [](auto a){cout<<a<<" ";});
    cout << endl;
    
    //3. vector& operator=(const vector& vec): ���������ާ@�šC
    v2=v1;
    for_each(v2.begin(), v2.end(), [](auto a){cout<<a<<" ";});
    cout << endl;
    //4. swap(vec): �Nvec�P�������������C
    v3.swap(v2);
    for_each(v2.begin(), v2.end(), [](auto a){cout<<a<<" ";});
    cout << endl;
    for_each(v3.begin(), v3.end(), [](auto a){cout<<a<<" ";});
}