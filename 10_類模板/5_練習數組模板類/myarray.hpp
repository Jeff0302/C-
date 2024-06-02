#include<iostream>
using namespace std;

template<class T>
class MyArray
{
private:
    int capacity;
    int size;
    //有指針成員必須實現拷貝構造
    T* datas;
public:
    MyArray(int capaicity);
    //拷貝構造
    MyArray(const MyArray &old_array);
    ~MyArray();
    bool append(T data);
    int getSize();
    void showAll();
};

template<class T>
MyArray<T>::MyArray(int capaicity):capacity(capaicity), size(0)
{
    cout << "MyArray構造 " << endl;
    //默認調用無參構造
    datas = new T[capaicity];
}

 //拷貝構造
template<class T>
MyArray<T>::MyArray(const MyArray &old_array):capacity(old_array.capacity), size(old_array.size)
{
   cout << "MyArray拷貝構造 " << endl; 
   datas = new T[capacity];

   for(int i=0; i<size;i++)
   {
        datas[i] = old_array.datas[i];
   }
  
}


template<class T>
MyArray<T>::~MyArray()
{
    cout << "MyArray析構 " << endl;
    if(datas!=NULL)
        delete [] datas;
}

/*
    size < capacity 添加成功返回 true，否則返回 false           
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
        //如果輸出是自訂義對象，全局必須重載 << 
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