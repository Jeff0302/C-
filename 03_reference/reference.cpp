#include<iostream>
using namespace std;

void test1(int &in){
    cout << "in�a�}: " << &in << endl;
    in=10;
}

void test2(int in){
    cout << "in�a�}: " << &in << endl;
    in=10;    
}

int &test3(){
    //��ƪ���^�ȬO�ޥήɡA���n��^�����ܶq
    //int test3_a = 100;
    static int test3_a = 100;
    cout << "test3_a�a�}=" << &test3_a << endl;
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
//���w���ޥ�
void new_str2(char *(&p)){
    static char a[] = "hello world!\n";
    p = a;
}

int main(){
    int a = 100;
    // �y�k: <type> &�O�W
    // �ޥΥ����H�ܶq��l�ơA�B�@����l�ƴN����ק�O�W
    int &b = a;
  
    // �ޥΤ��|�����s�}�P�s�Ŷ��A�a�}�ۦP
    cout << "a���a�}: " <<&a << endl;
    cout << "b���a�}: " <<&b << endl;

    //�覡1
    //�Ʋժ��ޥλy�k: <type> (&�O�W)[length] = �Ʋ��ܶq;
    int array[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int (&ar)[10] = array;
    cout << "array���a�}: " <<&array << endl;
    cout << "ar���a�}: " <<&ar << endl;

    //�覡2 �ϥ�typedef
    typedef int array_type[10];
    array_type &at = array;
    cout << "at���a�}: " <<&at << endl;


    //�ޥΦb�@����ƪ��Ѽ�
    cout << "-------------------------" << endl;
    int test_in = 100;
    cout << "test_in�a�}: " << &test_in << endl;
    test1(test_in);
    cout << "test_in = " << test_in << endl;
    cout << "-------------------------" << endl;
    test_in = 100;
    cout << "test_in�a�}: " << &test_in << endl;
    test2(test_in);
    cout << "test_in = " << test_in << endl;
    cout << "-------------------------" << endl;

    //�ޥΧ@����ƪ���^��
    int &result = test3();
    cout << "result�a�}:" << &result << endl;

    //��ƪ���^�����O�ޥήɡA�i�H�@������
    test4() = 10; 
    test4();

    //���w���ޥ�
    cout << "-----------------------" << endl;
    char *str = NULL;
    
    new_str2(str);
    cout << "str=" <<str << endl;

    int x = 10;
    //�`�q�ޥ�
    const int &y = x;
    //���i�H�ΧO�W�ӧ��Q�ޥΪ��ƾ�(�uŪ)
    //y = 20;
}



