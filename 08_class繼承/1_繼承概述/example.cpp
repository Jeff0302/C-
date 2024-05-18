#include<iostream>
#include<string.h>
using namespace std;

//設置父類
class Base
{
public:
    int a;
private: 
    int b;
protected:
    int c;  


};

//設置一個子類
class Son:public Base
{
public:
    //1. 父類中的公有數據在子類中也是公有的
    //2. 父類中的私有數據在子類中是 "不可見的"(子類無法訪問父類的私有數據)
    //3. 父類中的保護數據，在子類中是保護的(可見的)
    //子類內部
    void showSon(){
        
        //子類無法訪問父類的私有數據
        //this.b = 200; //不能直接訪問
        //子類可以訪問父類的保護數據
        this->c = 100;

    };    

};


class SonProtected:protected Base
{
public:
    //1. 父類中的公有數據在子類中是 保護的
    //2. 父類中的私有數據在子類中是 "不可見的"(子類無法訪問父類的私有數據)
    //3. 父類中的保護數據，在子類中是保護的(可見的)
    //子類內部
    void showSon(){

        this->a = 100;
    };    

};


class SonPrivate:private Base
{
public:
    //1. 父類中的公有數據在子類中是 私有的
    //2. 父類中的私有數據在子類中是 "不可見的"(子類無法訪問父類的私有數據)
    //3. 父類中的保護數據，在子類中是 私有的
    //子類內部
    void showSon(){
        
        this->a = 100;
        cout << this->a<< endl;
    };    

};


int main(){
  //類外部
  
  //1. 公開繼承
  Son son;
  son.a = 100;
  cout << "父類中的public數據a=" << son.a << endl;
  //無法訪問
  //son.b = 200;
  //無法訪問
  //son.c = 100

  //2. 保護繼承
  SonProtected son2;
  //子類外不可以訪問
  //son2.a=100;

  SonPrivate son3;
  //子類外不可以訪問
  //son3.a = 100;
  son3.showSon();


}