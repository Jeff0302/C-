#include<iostream>
using namespace std;

int main(){
    pair<int, string> pair1(60362,"Jeff");
    cout << "ID= " << pair1.first << ", name= " << pair1.second << endl;

    pair<int, string> pair2 = make_pair(700445, "Amy");
    cout << "ID= " << pair2.first << ", name= " << pair2.second << endl;
}