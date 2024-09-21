#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
  plus<int> p;
  cout << p(10, 20) << endl;
  cout << plus<int>()(30, 30) << endl;

}
