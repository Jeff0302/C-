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

    //更++a operator++(a)Θㄧ计いΤthis皐┮a菠
    Data &operator++(){
        (this->a)++;
        (this->b)++;
        return *this;
    }

    //更a++惠璶材2把才int operator++(a, int)Θㄧ计いΤthis皐┮a菠
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