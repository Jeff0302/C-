#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> qe;
    qe.push(10);
    qe.push(20);
    qe.push(30);

    if(qe.empty())
    {
        cout << "queue容器為空" << endl;
    }
    else
    {
        while (!qe.empty())
        {
            cout << qe.front() << " ";
            qe.pop();
        }
        cout << endl;
        
    }
}