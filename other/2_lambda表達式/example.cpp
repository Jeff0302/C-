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

    //[]ボㄧ计()把计{}ㄧ计砰
    for_each(v.begin(), v.end(), [&](int a){cout << a << " ";});

}