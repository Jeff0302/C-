class A
{
private:
    int m_a;
public:
     A();
     A(int a);
     ~A();
};

class B
{
private:
    int m_B;
public:
     B();
     B(int b);
     ~B();
};


class Data
{
private:
    // int m_a;
    // int m_b;
    // int m_c;
    A m_a; //對象成員
    B m_b; //對象成員
    int data; //基本類型成員

public:
    // Data(int a, int b, int c);
    Data();
    Data(int a, int b, int c);
    Data(A a, B b, int C);
    ~Data();
    void showData();
};





