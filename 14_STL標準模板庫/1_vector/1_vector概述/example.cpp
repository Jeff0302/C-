#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //��ݰʺA�Ʋ�vector ���ҪO 
    vector<int> v; //v�N�O�@�Ө��骺vector�e��
    
    //push_back �������J
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    v.push_back(400);

    //�X�ݼƾ�
    //�w�q�@�ӭ��N���s�x v���_�l��m
    //vector<int>::iterator beginIt = v.begin();
    //�w�q�@�ӭ��N���s�x v��������m
    //vector<int>::iterator endIt = v.end();

    
    //for�`���M�� �覡1 
    // for (;  beginIt!=endIt ; beginIt++)
    // {
    //     cout <<*beginIt << endl;
    // }
    // ���˹M���覡
    // for (vector<int>::iterator iter=v.begin();  iter!=v.end() ; iter++)
    // {
    //     cout <<*iter << endl;
    // }

    //for�`���M�� �覡2 
    // for(int i=0;i<v.size();i++)
    // {
    //     cout << "v[" << i <<"]=" << v[i] << endl;
    // }
    
    //STL���Ѫ���k�ӹM���e��(���]�t�Y��� algorithm)
    //for_each �q�e�����_�l ---> ���� �A�v�Ӥ������X
    for_each(v.begin(), v.end(), [](int a){cout<< a << endl;});

}