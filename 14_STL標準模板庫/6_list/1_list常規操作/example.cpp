#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void show_list(list<int> &lst){
    for (list<int>::iterator iter = lst.begin();iter!=lst.end();iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

}


int main(){
    list<int> t;
    t.push_back(10);
    t.push_back(20);
    t.push_back(30);
    t.push_back(40);
    show_list(t); //10 20 30 40

    //�����A��������N�� + n, �u���H���X�ݭ��N���䴩
    //t.insert(t.begin()+ 2, 4, 1);
    //list�e�����N���O���V���N��
    list<int>::iterator it = t.begin();
    //++ �H���X�ݭ��N�� �M ���V���N�� �����
    it++;
    t.insert(it, 4, 1);

    show_list(t);

    //������
    t.reverse();
    show_list(t);

    //sort�O�t�δ��Ѫ���k�A�Ȥ���H���X�ݭ��N��
    //list�e������ϥΨt�κ�k�A��list�e���|�ۤv���Ѻ�k
    //sort(t.begin(), t.end());
    t.sort();
    show_list(t);







}
