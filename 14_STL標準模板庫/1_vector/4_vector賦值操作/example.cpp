#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> v1(10, 1);
    vector<int> v2(10, 0);
    vector<int> v3(5, 9);
    //1. assign(beg, end): 盢[beg, end]跋丁い计沮ī结倒セō
    v2.assign(v1.begin(), v1.end()-1);
    for_each(v2.begin(), v2.end(), [](auto a){cout<<a<<" ";});
    cout << endl;
    
    //2. assign(n, elem): 盢nelemī结倒セō
    v2.assign(8, 8);
    for_each(v2.begin(), v2.end(), [](auto a){cout<<a<<" ";});
    cout << endl;
    
    //3. vector& operator=(const vector& vec): 更单腹巨才
    v2=v1;
    for_each(v2.begin(), v2.end(), [](auto a){cout<<a<<" ";});
    cout << endl;
    //4. swap(vec): 盢vec籔セōじが传
    v3.swap(v2);
    for_each(v2.begin(), v2.end(), [](auto a){cout<<a<<" ";});
    cout << endl;
    for_each(v3.begin(), v3.end(), [](auto a){cout<<a<<" ";});
}