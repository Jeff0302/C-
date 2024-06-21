#include <vector>
#include <iostream>
using namespace std;


int main(){
    vector<int> v;
    //減少另尋空間次數，增加效率。
    v.reserve(1000);
    
    int count = 0;
    int *p;
    p= &v[0];
    for(int i=0;i<1000;i++)
    {
       
       
        v.push_back(i);
        if(p!=&v[0])
         {  
            p = &v[0];
            cout << p << endl;
            count++;
         }
    }
    cout << "另尋空間的次數" << count << endl;

}