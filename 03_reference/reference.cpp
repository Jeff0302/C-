#include<iostream>
using namespace std;

void test1(int &in){
    cout << "in: " << &in << endl;
    in=10;
}

void test2(int in){
    cout << "in: " << &in << endl;
    in=10;    
}

int &test3(){
    //ㄧ计琌まノぃ璶Ы场跑秖
    //int test3_a = 100;
    static int test3_a = 100;
    cout << "test3_a=" << &test3_a << endl;
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
//皐まノ
void new_str2(char *(&p)){
    static char a[] = "hello world!\n";
    p = a;
}

int main(){
    int a = 100;
    // 粂猭: <type> &
    // まノゲ斗跑秖﹍てス﹍て碞ぃэ
    int &b = a;
  
    // まノぃ穦ず秨臥穝丁
    cout << "a: " <<&a << endl;
    cout << "b: " <<&b << endl;

    //よΑ1
    //计舱まノ粂猭: <type> (&)[length] = 计舱跑秖;
    int array[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int (&ar)[10] = array;
    cout << "array: " <<&array << endl;
    cout << "ar: " <<&ar << endl;

    //よΑ2 ㄏノtypedef
    typedef int array_type[10];
    array_type &at = array;
    cout << "at: " <<&at << endl;


    //まノㄧ计把计
    cout << "-------------------------" << endl;
    int test_in = 100;
    cout << "test_in: " << &test_in << endl;
    test1(test_in);
    cout << "test_in = " << test_in << endl;
    cout << "-------------------------" << endl;
    test_in = 100;
    cout << "test_in: " << &test_in << endl;
    test2(test_in);
    cout << "test_in = " << test_in << endl;
    cout << "-------------------------" << endl;

    //まノㄧ计
    int &result = test3();
    cout << "result:" << &result << endl;

    //ㄧ计摸琌まノオ
    test4() = 10; 
    test4();

    //皐まノ
    cout << "-----------------------" << endl;
    char *str = NULL;
    
    new_str2(str);
    cout << "str=" <<str << endl;

    int x = 10;
    //盽秖まノ
    const int &y = x;
    //ぃノㄓэ砆まノ计沮(弄)
    //y = 20;
}



