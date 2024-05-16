#include <iostream>
using namespace std;
/*
class Data
{
private:
    int num;
public:

    Data(int num):num(num){
        cout << "num=" << this->num << "構造了" << endl;
    }

    void showData(){
        cout << "num=" << this->num << endl;
    }
    ~Data(){
        cout << "num=" << this->num << "析構了" << endl;
    }
};


class Smartpointer
{
public:
    Data *p;
    Smartpointer(Data *p){
        this->p = p;
    }
    ~Smartpointer(){
        // 檢查智能指針所指向空間是否需釋放
        if(p!=NULL)
        {
            delete p;
            p = NULL;
        }
    }

    Data* operator->(){
        return this->p;
    }
    Data& operator*(){
        return *(this->p);
    }
    
};

int main()
{
    // 問題: 用new申請堆區空間後，可能忘記釋放。
    // Data *p = new Data(10);
    // p->showData();

    // 解決方式 : 智能指針自動釋放堆區空間
    // 局部智能指針對象 -> 當前作用域結束後自動釋放
    Smartpointer pointer(new Data(10));
    // pointer.p->showData();
    // 如何簡化調用的方式pointer->showData(); 重載 -> 
    // (pointer.operator->() )-> showData();  分析: pointer.operator->() )需要返回Data對象的指針
    // 簡化調用方式
    pointer->showData();

    (*(pointer.p)).showData();
    // 如何簡化調用的方式(*pointer).showData(); 重載 *
    // (pointer.operator*()).showData();  分析: pointer.operator*()需要返回Data對象的引用
    (*pointer).showData();


}

*/