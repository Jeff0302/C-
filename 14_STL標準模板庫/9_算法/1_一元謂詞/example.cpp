#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//���q��Ƨ@���@���׵�
bool greaterThan20(int a){
    return a>20;
}

//���Ƨ@���@���׵�
class MygreaterThan20
{
public:
    bool operator()(int a){
        return a > 20;
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
    //���q��Ƨ���
     vector<int>::iterator it = find_if(v.begin(), v.end(), MygreaterThan20());
     if(it!=v.end())
     {
        cout << "�Ĥ@�Ӥj��20���Ƭ�" << *it << endl;
     }


}
