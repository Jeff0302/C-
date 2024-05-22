#include<iostream>
using namespace std;

class Aniaml
{
public:
    int data;
};

//虛繼承，其中Aniaml為虛基類
class Sheep:virtual public Aniaml
{
public:
};

//虛繼承，其中Aniaml為虛基類
class Tuo:virtual public Aniaml
{
public:
};

class SheepTuo:public Sheep, public Tuo
{
public:
};



int main(){
    SheepTuo st;
    //報錯,二義性, 從Sheep中繼承data, 從Tuo中也繼承data
    //st.data=10;
    //解決方式1 加作用域
    //st.Sheep::data = 100;
    //st.Tuo::data = 200;

    //解決方式2 虛繼承
    st.data=10;
}