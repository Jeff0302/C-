#include<iostream>
#include<string>
using namespace std;

/*
    ���D1: ���ѧObedroom�MsittingRoom
    �`�N: �V�e�n��class Room;�u�໡���o�����s�b�A������y�z�o���������Ǧ����C

*/
class Room;

class Friend
{
private:
    /* data */
public:
    void visit(Room &room);
    // {
    //     cout << "�n�Ͷi�J" <<room.bedroom << endl;  //�i�H�X�ݨp���ƾ�
    //     cout << "�n�Ͷi�J" <<room.sittingRoom << endl;
    // };
};

//�ڭn�X�ݽ֡A�ִN�n��ڷ�B��
class Room
{
//���q������Ƨ@�������ͤ�
friend void visit(Room &room);
//����������ư����t�@�������ͤ�    
//friend void Friend::visit(Room &room);
//�������t�@�������ͤ�  
friend class Friend;  

private:
    string bedroom; //�׫�
public:
    string sittingRoom; //���U
    Room(/* args */){
        bedroom = "�׫�";
        sittingRoom = "���U";
    };
};

void Friend::visit(Room &room)
{
    cout << "�n�Ͷi�J" <<room.bedroom << endl;  //�i�H�X�ݨp���ƾ�
    cout << "�n�Ͷi�J" <<room.sittingRoom << endl;
}

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

    Friend f;
    f.visit(room);

}


