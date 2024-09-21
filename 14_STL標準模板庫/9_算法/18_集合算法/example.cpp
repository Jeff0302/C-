#include<iostream>
#include<vector>
#include<algorithm>
//�ޥ�numeric�Y���
#include<numeric>
using namespace std;

int main(){
    vector<int> A;
    A.push_back(1);
    A.push_back(3);
    A.push_back(5);
    A.push_back(7);
    
    vector<int> B;
    B.push_back(1);
    B.push_back(5);
    B.push_back(7);
    B.push_back(31);

    //����涰
    vector<int> C;
    C.resize(A.size()>B.size()?B.size():A.size());
    //��^�Ȭ��̫�@�Ӯe����m
    vector<int>::iterator iter =set_intersection(A.begin(), A.end(), B.begin(), B.end(), C.begin());    
    for_each(C.begin(), iter, [](int a){ cout<< a << " ";});
    cout << endl;

    //����ö�
    vector<int> D;
    D.resize(B.size()+ A.size());
    //��^�Ȭ��̫�@�Ӯe����m
    vector<int>::iterator iter2 =set_union(A.begin(), A.end(), B.begin(), B.end(), D.begin());    
    for_each(D.begin(), iter2, [](int a){ cout<< a << " ";});
    cout << endl;;

    //����t��
    vector<int> E;
    E.resize(A.size());
    //��^�Ȭ��̫�@�Ӯe����m
    vector<int>::iterator iter3 =set_difference(A.begin(), A.end(), B.begin(), B.end(), E.begin());    
    for_each(E.begin(), iter3, [](int a){ cout<< a << " ";});
    cout << endl;;
    
}