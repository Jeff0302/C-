#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    
    vector<int> v2;
    v2.resize(v1.size());

    copy(v1.begin(), v1.end(), v2.begin());
    for_each(v2.begin(), v2.end(), [](int a){ cout << a << " ";});
}