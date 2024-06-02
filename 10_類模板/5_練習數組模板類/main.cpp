#include "myarray.hpp"

int main(){
    cout << "-------------�򥻼ƾ�����---------------" << endl;
    MyArray<int> myarray1(100);
    cout << myarray1.getSize() << endl;
    myarray1.append(100);
    cout << myarray1.getSize() << endl;
    myarray1.showAll();
    cout << "-------------string����---------------" << endl;

    MyArray<string> myarray2(100);
    cout << myarray2.getSize() << endl;
    myarray2.append("123");
    myarray2.append("456");
    cout << myarray2.getSize() << endl;
    myarray2.showAll();


    cout << "-------------�ۭq�q�ƾ�����---------------" << endl;
    MyArray<Person> myarray4(100);
    myarray4.append(Person("Jeff", 18));
    myarray4.append(Person("Amy", 36));
    cout << myarray4.getSize() << endl;
    myarray4.showAll();

    
    cout << "-------------�����c�y---------------" << endl;
    MyArray<Person> myarray3 = myarray4;
    myarray3.showAll();
}
