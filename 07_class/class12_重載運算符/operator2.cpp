#include <iostream>
using namespace std;

/*
class Data
{
    friend ostream &operator<<(ostream &out, Data &data);
private:
    int a;
    int b;
public:
    Data(int a, int b):a(a),b(b){

    };
    ~Data(){

    };

    //����++a operator++(a)�A�b������Ƥ���this���w�A�ҥHa�i�H�ٲ�
    Data &operator++(){
        (this->a)++;
        (this->b)++;
        return *this;
    }

    //����a++�A�ݭn��2�ӧΰѪ������int operator++(a, int)�A�b������Ƥ���this���w�A�ҥHa�i�H�ٲ�
    Data &operator++(int){
        static Data temp = *this;
        (this->a)++;
        (this->b)++;

        return temp;
    }
};


ostream &operator<<(ostream &out, Data &data){
    out << "data.a=" << data.a << ", data.b=" << data.b;
    return out;
}

int main(){
    Data a(1, 2);
    cout << ++a << endl;
 
    cout << a++ << endl;
    cout << a << endl;


}
*/