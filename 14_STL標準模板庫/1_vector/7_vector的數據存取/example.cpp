#include <vector>
#include <iostream>
using namespace std;

/*
1. at(int idx): ��^����idx�ҫ����ƾڡA�p�Gidx�V�ɡA�ߥXout_of_range���`
2. operator[]: ��^����idx�ҫ����ƾڡA�p�Gidx�V�ɡA�B�檽������
3. font(): ��^�e���Ĥ@�Ӥ����C
4. back(): ��^�e���̫�@�Ӥ����C

*/
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "at(1)= " << v.at(1) << endl; //20
    cout << "v[1]= " << v[1] << endl;   //20
    cout << "v.front()= " << v.front() << endl; //10
    cout << "v.back()= " << v.back() << endl; //40
}
