#include<iostream>
using namespace std;
class Person
{
    //ㄧ计家狾砞竚ねじ
    //ㄧ计家狾酚й玡friend闽龄
    template<typename T> friend T& mybigger(T &ob1, T &ob2);
    //template<typename Person> friend Person& mybigger(Person &ob1, Person &ob2);
    friend ostream& operator<<(ostream &out, Person &ob);
private:
    int a;
    int b;
               
public:
    Person(int a, int b):a(a), b(b){

    }
    ~Person(){

    }

    bool operator>(Person &ob){
        return this->a > ob.a ? true:false;
    }
};

template<typename T>
T& mybigger(T &ob1, T &ob2){
    //Person摸ぃ醚>笲衡才
    return ob1>ob2? ob1:ob2;
}

ostream& operator<<(ostream &out, Person &ob){
    cout << "ob.a = " <<  ob.a << ",ob. b = " <<  ob.b;
    return out;
}

//よ猭1 ㄣ砰て ㄧ计家狾
/*
template<> Person& mybigger(Person &ob1, Person &ob2){
    
    return ob1.a>ob2.b?  ob1:ob2;
}
*/

int main(){

    Person ob1(10, 10);
    Person ob2(20, 20);
    cout << ob1 << endl;

    //よΑ1 ㄣ砰て ㄧ计家狾
    cout << mybigger<Person>(ob1, ob2);
}

