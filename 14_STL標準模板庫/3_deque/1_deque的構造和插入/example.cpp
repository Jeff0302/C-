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
    deque<int> deq1(5, 10);
    printDequeInt(deq1);

    deque<int> deq2;
    deq2.assign(6, 100);
    printDequeInt(deq2);

    deq2.swap(deq1);
    printDequeInt(deq2);
}