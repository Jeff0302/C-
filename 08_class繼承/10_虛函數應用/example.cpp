#include<iostream>
using namespace std;

class SG
{
protected:
    double freqMHz=2440.0;
public:
    //���ƥi�H�ݦ��O��ƫ��w
    virtual void setFreq(double freq){
        freqMHz = freq;
        cout << "�ե�SG��setFreq��k" << endl;
    }

    double getFreq(){
        return freqMHz;
    }

};

class RS:public SG
{
public:
    //�~�Ӱ��������ƫ��w�ε��ƪ�A�ñN���ƪ�ҫ��V����ƤJ�f�a�}��������e�l�����P�W���ơC
    virtual void setFreq(double freq){
        freqMHz = freq;
         cout << "�ե�RS SG��setFreq��k" << endl;
    }

};

class IQ:public SG
{
public:
    virtual void setFreq(double freq){
        freqMHz = freq;
         cout << "�ե�IQ SG��setFreq��k" << endl;
    }

};



int main(){
    RS rs;
    IQ iq;
    //�V�W�ഫ
    SG &sg1= rs;
    SG &sg2= iq;
    sg1.setFreq(2441.0);
    cout << "sg1 freq=" << sg1.getFreq() << endl;
    sg2.setFreq(2442.0);
    cout << "sg2 freq=" << sg2.getFreq() << endl;


}