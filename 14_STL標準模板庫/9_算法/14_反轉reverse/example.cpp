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
    reverse(v1.begin(), v1.end());

    for_each(v1.begin(), v1.end(), [](int a){ cout << a << " ";});
}