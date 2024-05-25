#include<iostream>
using namespace std;

class SG
{
protected:
    double freqMHz=2440.0;
public:
    //虛函數可以看成是函數指針
    virtual void setFreq(double freq){
        freqMHz = freq;
        cout << "調用SG的setFreq方法" << endl;
    }

    double getFreq(){
        return freqMHz;
    }

};

class RS:public SG
{
public:
    //繼承基類的虛函數指針及虛函數表，並將虛函數表所指向的函數入口地址替換為當前子類的同名虛函數。
    virtual void setFreq(double freq){
        freqMHz = freq;
         cout << "調用RS SG的setFreq方法" << endl;
    }

};

class IQ:public SG
{
public:
    virtual void setFreq(double freq){
        freqMHz = freq;
         cout << "調用IQ SG的setFreq方法" << endl;
    }

};



int main(){
    RS rs;
    IQ iq;
    //向上轉換
    SG &sg1= rs;
    SG &sg2= iq;
    sg1.setFreq(2441.0);
    cout << "sg1 freq=" << sg1.getFreq() << endl;
    sg2.setFreq(2442.0);
    cout << "sg2 freq=" << sg2.getFreq() << endl;


}