#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    //set<int> st1;

    multiset<int> st1;

    st1.insert(10);
    st1.insert(20);
    st1.insert(10);
    cout << st1.count(10) << endl;

    for_each(st1.begin(), st1.end(), [](int a){ cout << a << " ";});
}