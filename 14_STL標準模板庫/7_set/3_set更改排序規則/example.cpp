#include<iostream>
#include<set>
#include<algorithm>
using namespace std;


class MyGreater
{
public:
    static bool operator()(int n1, int n2){
        return n1>n2? true:false;
    }
};




int main(){

       
    //�q�{�q�p��j��
    //�令�q�j��p��
    //set<int, �ƧǳW�h> s;
    //�ƧǳW�h�J�O�����S�O���--> ����
    set<int, MyGreater> st;

    st.insert(30);
    st.insert(10);
    st.insert(20);
    st.insert(50);
    st.insert(40);
 
    for_each(st.begin(), st.end(), [](int a){ cout << a << " ";});
    cout << endl;


}