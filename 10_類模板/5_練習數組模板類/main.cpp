#include "myarray.hpp"

int main(){
    cout << "-------------基本數據類型---------------" << endl;
    MyArray<int> myarray1(100);
    cout << myarray1.getSize() << endl;
    myarray1.append(100);
    cout << myarray1.getSize() << endl;
    myarray1.showAll();
    cout << "-------------string類型---------------" << endl;

    MyArray<string> myarray2(100);
    cout << myarray2.getSize() << endl;
    myarray2.append("123");
    myarray2.append("456");
    cout << myarray2.getSize() << endl;
    myarray2.showAll();


    cout << "-------------自訂義數據類型---------------" << endl;
    MyArray<Person> myarray4(100);
    myarray4.append(Person("Jeff", 18));
    myarray4.append(Person("Amy", 36));
    cout << myarray4.getSize() << endl;
    myarray4.showAll();

    
    cout << "-------------拷貝構造---------------" << endl;
    MyArray<Person> myarray3 = myarray4;
    myarray3.showAll();
}
