#include <iostream>
using namespace std;

namespace A{
    int a = 10;
}

//�R�W�Ŷ��i�H�O�M
namespace B{
    int a = 20;
    namespace BB{
        int a = 30;
    }
} 

//�R�W�Ŷ��O�}�񪺡A�i�H�H�ɧ�s�������[�J�w���R�W�Ŷ���
namespace A{
    int aa = 13;

    //�R�W�Ŷ�����Ʃw�qI
    void func(){
        cout << "A�R�W�Ŷ�����func()�Q�եΤF" << endl;
    }
    void funcII();
} 

//�R�W�Ŷ�����Ʃw�qII
void A::funcII(){
        cout << "A�R�W�Ŷ�����funcII()�Q�եΤF" << endl;
}



void test(){
    //�R�W�Ŷ��u��b�����d��w�q
    // namespace C{

    // }
}

// int a = 5;
int main()
{
    // int a = 5;
    // cout << "a=" << a << endl;
    cout << "A::a=" << A::a << endl;
    cout << "A::aa=" << A::aa << endl;
    cout << "B::a=" << B::a << endl;
    //�R�W�Ŷ��i�H�O�M
    cout << "B::BB::a=" << B::BB::a << endl;
    //�ϥΩR�W�Ŷ��������
    A::func();
    A::funcII();
    //�R�W�Ŷ����O�W
    namespace new_A = A;
    new_A::func();

    //�ϥΩR�W�Ŷ�
    using namespace A;
    cout << "a=" << a << endl;
    func();
    
    return 0;
}