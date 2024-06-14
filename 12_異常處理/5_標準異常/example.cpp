#include <iostream>
#include <cstring>
using namespace std;


//�ۭq�q���`���A�H�Ყ�`�~�ӳo��
class TestError:public exception
{
private:
    char* message;
public:
    TestError(const char* info){
        message = new char[strlen(info)+1];
        strcpy(message,info);
    }
    TestError(const TestError &ob){
        message = new char[strlen(ob.message)+1];
        strcpy(message, ob.message);
    
    }
    virtual const char *what() const noexcept override{
        return message;
    }

    ~TestError(){
        if (message!=NULL)
        {
            delete [] message;
        }
    }
};



class Person
{
private:
    int age;
public:
    Person(int age):age(age)
    {
        
        if(this->age < 0 || this->age > 150)
        {    
            //throw out_of_range("�~�ֶW�X�d��");
            throw TestError("�ۭq�q���`�ߥX");
        }
    }
    ~Person(){}
};


int main(){
    
    try
    {
        Person p1(-1);
    }
    catch(exception &e)
    {
     cout << e.what() << endl;
    }
    

}