#include "person.hpp"


int main(){
    //類模板會經過兩次編譯
    //第一次是類模板本身編譯
    //第二次是類模板的成員函數調用的時候
    //c++/c 獨立文件編譯
    //如果 類模板的.cpp和.h分文件了 出錯原因在第二次編譯
    //建議.cpp和.h放在一起
    Person<string, int> p1("Jeff", 18);
    p1.showPerson();
}