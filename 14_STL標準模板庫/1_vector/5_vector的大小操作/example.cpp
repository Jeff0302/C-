#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    size(): ��^�e�����������Ӽ�
    empty(): �P�_�e���O�_����
    resize(int num): ���s���w�e�������׬�num�A�Y�e���ܪ��A�h�q�{��R�s��m�C�p�G�e���ܵu�A�h�����W�X���ת������N�Q�R���C
    resize(int num, elem): ���s���w�e�������׬�num�A�Y�e���ܪ��A�h�Helem��R�s��m�C�p�G�e���ܵu�A�h�����W�X���ת������N�Q�R���C
    capacity(): ��^�e�����e�q
    reserve(int length): �e���w�dlen�Ӥ������סA�w�d��m����l�ơA�������i�H�X�ݡC

*/
int main(){

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    if (v.empty())
    {
        cout << "�e������" << endl;
    }
    else
    {
         cout << "�e��������" << endl;
         cout << "�e��size=" << v.size() << endl;
         cout << "�e��capacity=" << v.capacity() << endl;
    }
    for_each(v.begin(), v.end(),[](auto a){cout << a << " ";});
    cout << endl; //10 20 30 40

    v.resize(6);
    for_each(v.begin(), v.end(),[](auto a){cout << a << " ";});
    cout << endl;//10 20 30 40 0 0

    v.resize(8, 5);
    for_each(v.begin(), v.end(),[](auto a){cout << a << " ";});
    cout << endl;//10 20 30 40 0 0 5 5


    vector<int> v2(1000,1);
    //resize���|���ܮe�q
    v2.resize(10);
    cout << "v2���e�q=" << v2.capacity() << endl;

    //�ϥ�swap���Y�e�q
    /*
        vector<int> v4 = v2;
        cout << "v4���e�q=" << v4.capacity() << endl;
        v4.swap(v2);
        cout << "v2���e�q=" << v2.capacity() << endl;
    */
    //�Ϋ����c�y���ΦW�e����H�洫
    vector<int>(v2).swap(v2);
    cout << "v2���e�q=" << v2.capacity() << endl;

}