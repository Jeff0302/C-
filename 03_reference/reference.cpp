#include<iostream>
using namespace std;

void test1(int &in){
    cout << "in地址: " << &in << endl;
    in=10;
}

void test2(int in){
    cout << "in地址: " << &in << endl;
    in=10;    
}

int &test3(){
    //函數的返回值是引用時，不要返回局部變量
    //int test3_a = 100;
    static int test3_a = 100;
    cout << "test3_a地址=" << &test3_a << endl;
    cout << "test3_a=" << test3_a << endl;
    return test3_a;
}

int &test4(){
    static int a = 100;
    cout << "a=" << a;
    return a;
}

void new_str(char **p){
    static char a[] = "hello world!\n";
    *p = a;
}

typedef char *PP;
//PP &p
//指針的引用
void new_str2(char *(&p)){
    static char a[] = "hello world!\n";
    p = a;
}

int main(){
    int a = 100;
    // 語法: <type> &別名
    // 引用必須以變量初始化，且一旦初始化就不能修改別名
    int &b = a;
  
    // 引用不會為內存開闢新空間，地址相同
    cout << "a的地址: " <<&a << endl;
    cout << "b的地址: " <<&b << endl;

    //方式1
    //數組的引用語法: <type> (&別名)[length] = 數組變量;
    int array[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int (&ar)[10] = array;
    cout << "array的地址: " <<&array << endl;
    cout << "ar的地址: " <<&ar << endl;

    //方式2 使用typedef
    typedef int array_type[10];
    array_type &at = array;
    cout << "at的地址: " <<&at << endl;


    //引用在作為函數的參數
    cout << "-------------------------" << endl;
    int test_in = 100;
    cout << "test_in地址: " << &test_in << endl;
    test1(test_in);
    cout << "test_in = " << test_in << endl;
    cout << "-------------------------" << endl;
    test_in = 100;
    cout << "test_in地址: " << &test_in << endl;
    test2(test_in);
    cout << "test_in = " << test_in << endl;
    cout << "-------------------------" << endl;

    //引用作為函數的返回值
    int &result = test3();
    cout << "result地址:" << &result << endl;

    //函數的返回類型是引用時，可以作為左值
    test4() = 10; 
    test4();

    //指針的引用
    cout << "-----------------------" << endl;
    char *str = NULL;
    
    new_str2(str);
    cout << "str=" <<str << endl;

    int x = 10;
    //常量引用
    const int &y = x;
    //不可以用別名來更改被引用的數據(只讀)
    //y = 20;
}