#include<iostream>
#include<string>
using namespace std;

class Room
{
//���q������Ƨ@�������ͤ�
friend void visit(Room &room);
private:
    string bedroom; //�׫�
public:
    string sittingRoom; //���U
    Room(){
        bedroom = "�׫�";
        sittingRoom = "���U";
    };
};

//���q������Ƨ@�������ͤ�
void visit(Room &room)
{
    cout << "�n�Ͷi�J" <<room.bedroom << endl;  //�i�H�X�ݨp���ƾ�
    cout << "�n�Ͷi�J" <<room.sittingRoom << endl;
}

int main()
{
    Room room;
    visit(room);

}
