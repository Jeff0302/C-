#include<iostream>
#include<string.h>
using namespace std;


template<typename T>
void printAll(T* p , int len){
    for (int i = 0; i < len; i++)
    {
        cout << p[i]  << " ";
    }
    cout << endl;
}

template<typename T>
void mysort(T* p, int len){
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-1-i; j++)
        {
            if (p[j]>p[j+1])
            {
                T temp = p[j+1];
                p[j+1] = p[j];
                p[j] = temp;
            }
        }
    }
}

template<typename T>
void mysort2(T* p, int len){
    int final_pos = len-2;
    while (final_pos>=0)
    {
        for (int i = 0; i<=final_pos ; i++)
        {
             if (p[i+1]>p[i])
            {
                T temp = p[i+1];
                p[i+1] = p[i];
                p[i] = temp;
            }
        }
        final_pos--;
    }
}

int main(){
    //排序int a[]  char b[]
    char b[] = "rank";
    int len_b = strlen(b);
    int a[]={8, 7, 5, 6, 1, 7, 8};
    int len_a = sizeof(a)/sizeof(a[0]);

    //遍歷
    // a -> int * -> T* ,所以T是int
    printAll<int>(a, len_a);
    // b -> char * -> T* ,所以T是char
    printAll<char>(b, len_b);

    mysort2<int>(a, len_a);
    printAll<int>(a, len_a);

    mysort<char>(b, len_b);
    printAll<char>(b, len_b);




}