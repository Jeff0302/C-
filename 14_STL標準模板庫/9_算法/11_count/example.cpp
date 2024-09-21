#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;


int main(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(30);
    v1.push_back(50);

    int res = count(v1.begin(), v1.end(), 30);
    cout << "count= " << res << endl;

    int res2 = count_if(v1.begin(), v1.end(), bind(greater<int>(), std::placeholders::_1, 15));
    cout << "count > 15 = " << res2 << endl;
}