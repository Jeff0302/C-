#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//���q��Ƨ@���G���׵�
bool sortBiggerFirst(int a, int b){
    return a>b;
}

//���Ƨ@���G���׵�
class MysortBiggerFirst
{
public:
    bool operator()(int a, int b){
        return a > b;
    }
};


int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    //�ݨD���Ĥ@���j��20����
    //1. ���q��Ƨ���
    //sort(v.begin(), v.end(), sortBiggerFirst);
    //for_each(v.begin(), v.end(), [](int a){cout << a << " ";});
    
    //2. ���Ƨ���
    //sort(v.begin(), v.end(), MysortBiggerFirst());
    //for_each(v.begin(), v.end(), [](int a){cout << a << " ";});

    //3. �ϥΤ��ب�Ƨ���
    sort(v.begin(), v.end(), greater<int>());
    for_each(v.begin(), v.end(), [](int a){cout << a << " ";});
}
