#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    if(st.empty())
    {
        cout << "stack容器為空" << endl;
    }
    else
    {
        cout << "stack容器非空" << endl;
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
        
    }


}