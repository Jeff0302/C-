#include <iostream>
using namespace std;

class Base
{
protected:
    int num;
public:
    Base(int num){
        this->num = num;
        cout << "Base���Ѻc�y���" << endl;
    };
    ~Base(){
         cout << "Base�R�c���" << endl;
    };
    int getNum(){
        return this->num;
    };
};

class Son:public Base
{
private:
    int num; 
public:
     Son(int num1, int num2):Base(num1){
        this->num = num2;
        cout << "Son���Ѻc�y���" << endl;
     };
     ~Son(){
        cout << "Son�R�c���" << endl;
     };

     void showNum(){
        //������M�l���������ܶq�P�W�ɡA�|��ܷ�e�@�ΰ쪺�����ܶq(�N���h)�C
        cout << "Son��num=" << this->num << endl;
        //�p�G�b�l�����n�ϥ� �������P�W���� �����n�[�W�������@�ΰ�C
        cout << "Base��num=" << Base::num << endl;
        //�l���]�i�H�ɧU������������k�����ާ@�������p���ƾڡC
        cout << "Base��num=" << getNum() << endl;
     };
};


int main(){
    Son son(10,20);
   son.showNum(); 
}