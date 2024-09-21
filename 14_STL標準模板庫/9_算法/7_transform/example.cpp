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
    v1.push_back(40);
    v1.push_back(50);

    
    //�Nv1�����C�Ӥ���+1000
    //for_each(v1.begin(), v1.end(), [&](int &a){ a = a + 1000;});
    //transform�i�H�Ω�N�@�Ӯe�����ƾ��ഫ(�M�g)�ëO�s�ܥt�@�Ӯe��
    //�Nv1�����C�Ӥ���+1000�O�s��t�@�Ӯe��
    vector<int> v2;
    v2.resize(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), [](int a)->int{ return 1000+a;});
    for_each(v2.begin(), v2.end(), [](int a){cout << a << " ";});
}