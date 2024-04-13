#include<iostream>
using namespace std;

void test1(int &in){
    cout << "in��ַ: " << &in << endl;
    in=10;
}

void test2(int in){
    cout << "in��ַ: " << &in << endl;
    in=10;    
}

int &test3(){
    //�����ķ���ֵ�����Õr����Ҫ���ؾֲ�׃��
    //int test3_a = 100;
    static int test3_a = 100;
    cout << "test3_a��ַ=" << &test3_a << endl;
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
//ָᘵ�����
void new_str2(char *(&p)){
    static char a[] = "hello world!\n";
    p = a;
}

int main(){
    int a = 100;
    // �Z��: <type> &�e��
    // ���ñ����׃����ʼ������һ����ʼ���Ͳ����޸Ąe��
    int &b = a;
  
    // ���ò�����ȴ��_�V�¿��g����ַ��ͬ
    cout << "a�ĵ�ַ: " <<&a << endl;
    cout << "b�ĵ�ַ: " <<&b << endl;

    //��ʽ1
    //���M�������Z��: <type> (&�e��)[length] = ���M׃��;
    int array[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int (&ar)[10] = array;
    cout << "array�ĵ�ַ: " <<&array << endl;
    cout << "ar�ĵ�ַ: " <<&ar << endl;

    //��ʽ2 ʹ��typedef
    typedef int array_type[10];
    array_type &at = array;
    cout << "at�ĵ�ַ: " <<&at << endl;


    //���������麯���ą���
    cout << "-------------------------" << endl;
    int test_in = 100;
    cout << "test_in��ַ: " << &test_in << endl;
    test1(test_in);
    cout << "test_in = " << test_in << endl;
    cout << "-------------------------" << endl;
    test_in = 100;
    cout << "test_in��ַ: " << &test_in << endl;
    test2(test_in);
    cout << "test_in = " << test_in << endl;
    cout << "-------------------------" << endl;

    //�������麯���ķ���ֵ
    int &result = test3();
    cout << "result��ַ:" << &result << endl;

    //�����ķ�����������Õr������������ֵ
    test4() = 10; 
    test4();

    //ָᘵ�����
    cout << "-----------------------" << endl;
    char *str = NULL;
    
    new_str2(str);
    cout << "str=" <<str << endl;

    int x = 10;
    //��������
    const int &y = x;
    //�������Äe������ı����õĔ���(ֻ�x)
    //y = 20;
}