#include<iostream>
#include<vector>
#include<algorithm>
//�ޥ�numeric�Y���
#include<numeric>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    
    //�֥[
    int sum = accumulate(v1.begin(), v1.end(), 0);
    cout << "sum= " << sum  << endl;

    //��R
    vector<int> v2;
    v2.resize(5);
    fill(v2.begin(), v2.end(), 100);
    for_each(v2.begin(), v2.end(), [](int a){ cout<< a << " ";});
    
}