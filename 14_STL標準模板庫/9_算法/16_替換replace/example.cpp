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
    
    //將3替換為3000
    replace(v1.begin(), v1.end(), 3, 3000);
    for_each(v1.begin(), v1.end(), [](int a){ cout << a << " ";});
    cout << endl;
    
    //比10小替換為2000
    replace_if(v1.begin(), v1.end(),bind(less<int>(), std::placeholders::_1, 10), 2000);
    for_each(v1.begin(), v1.end(), [](int a){ cout << a << " ";});
    cout << endl;
}