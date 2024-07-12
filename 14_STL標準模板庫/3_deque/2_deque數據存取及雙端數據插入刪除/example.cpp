#include <deque>
#include <iostream>
using namespace std;


void printDequeInt(deque<int> &deq){

    for(deque<int>::iterator iter=deq.begin();iter!=deq.end();iter++){
        cout << *iter << " ";
    }
    cout << endl;
}

int main(){
    deque<int> d;
    //1. �������J
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    //2. �Y�����J
    d.push_front(40);
    d.push_front(50);
    d.push_front(60);
    printDequeInt(d);

    //3. �Y���R��
    d.pop_front();
    //4. �����R��
    d.pop_back();
    printDequeInt(d);

    //5. �P�_�e���O�_����
    if(d.empty()){
        cout << "d�e������" << endl;
    }
    else
    {
         cout << "d�e���D��, size= " << d.size() << endl;
    }
    
    //6. []�X�ݤ���
    cout << "d[2]= " << d[2] << endl;
    cout << "d[2]= " << d.at(2) << endl;
    cout << "�Y����= " << d.front() << endl;
    cout << "������= " << d.back() << endl;

    //7. ���J�ƾ�
    d.insert(d.begin()+1, 4, 4);
    printDequeInt(d);

    //8. �M�Ůe���ƾ�
    d.clear();
    cout << "d size= " << d.size() << endl;
}