#include<iostream>
using namespace std;

template<class T>
class MyArray
{
private:
    int capacity;
    int size;
    //�����w����������{�����c�y
    T* datas;
public:
    MyArray(int capaicity);
    //�����c�y
    MyArray(const MyArray &old_array);
    ~MyArray();
    bool append(T data);
    int getSize();
    void showAll();
};

template<class T>
MyArray<T>::MyArray(int capaicity):capacity(capaicity), size(0)
{
    cout << "MyArray�c�y " << endl;
    //�q�{�եεL�Ѻc�y
    datas = new T[capaicity];
}

 //�����c�y
template<class T>
MyArray<T>::MyArray(const MyArray &old_array):capacity(old_array.capacity), size(old_array.size)
{
   cout << "MyArray�����c�y " << endl; 
   datas = new T[capacity];

   for(int i=0; i<size;i++)
   {
        datas[i] = old_array.datas[i];
   }
  
}


template<class T>
MyArray<T>::~MyArray()
{
    cout << "MyArray�R�c " << endl;
    if(datas!=NULL)
        delete [] datas;
}

/*
    size < capacity �K�[���\��^ true�A�_�h��^ false           
*/
template<class T>
bool MyArray<T>::append(T data)
{
   if(size<capacity)
   {
        datas[size++] = data;
        return true;
   }
   else
   {
        return false;
   }     

}

template<class T>
int MyArray<T>::getSize()
{
  return size;
}

template<class T>
void MyArray<T>::showAll()
{
    if(size==0) cout << "nothing to show" << endl;
    for (int i = 0; i < size; i++)
    {
        //�p�G��X�O�ۭq�q��H�A������������ << 
        cout << "datas["<< i <<"]=" << datas[i] << endl;
    }
    
}


class Person
{
    
    friend ostream &operator<<(ostream &out, Person &p);
private:
    string name;
    int age;
public:
    Person(){
        name = "null";
        age = 0;
    };
    Person(string name, int age):name(name),age(age){

    };
    ~Person(){

    };
};

ostream &operator<<(ostream &out, Person &p){

    cout << p.name << ", " << p.age;  
    return out;
}