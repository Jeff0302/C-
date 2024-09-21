#include<iostream>
#include<vector>
#include<algorithm>
#include<random>
using namespace std;

//參考資料: https://blog.csdn.net/qq_21743659/article/details/127303097
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    std::random_device rd;
    shuffle(v1.begin(), v1.end(), std::default_random_engine(rd()));
    for_each(v1.begin(), v1.end(), [](int a){ cout << a << " ";});
}