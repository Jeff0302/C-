#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //[]��ܨ�ƦW�A()�ѼƦC��A{}�����
    for_each(v.begin(), v.end(), [&](int a){cout << a << " ";});

}