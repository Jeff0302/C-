#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;


int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    sort(v1.begin(), v1.end());
    
    vector<int> v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(8);
    sort(v2.begin(), v2.end());
    vector<int> v3;
    v3.resize(v1.size() + v2.size());
    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(), v3.end(), [](int a){ cout << a << " ";});
}