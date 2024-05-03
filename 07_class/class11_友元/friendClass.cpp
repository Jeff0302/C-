#include<iostream>
#include<string>
using namespace std;

/*
    問題1: 不識別bedroom和sittingRoom
    注意: 向前聲明class Room;只能說明這個類存在，但不能描述這個類有哪些成員。

*/
class Room;

class Friend
{
private:
    /* data */
public:
    void visit(Room &room);
    // {
    //     cout << "好友進入" <<room.bedroom << endl;  //可以訪問私有數據
    //     cout << "好友進入" <<room.sittingRoom << endl;
    // };
};

//我要訪問誰，誰就要把我當朋友
class Room
{
//普通全局函數作為類的友元
friend void visit(Room &room);
//類的成員函數做為另一個類的友元    
//friend void Friend::visit(Room &room);
//類做為另一個類的友元  
friend class Friend;  

private:
    string bedroom; //臥室
public:
    string sittingRoom; //客廳
    Room(/* args */){
        bedroom = "臥室";
        sittingRoom = "客廳";
    };
};

void Friend::visit(Room &room)
{
    cout << "好友進入" <<room.bedroom << endl;  //可以訪問私有數據
    cout << "好友進入" <<room.sittingRoom << endl;
}

//普通全局函數作為類的友元
void visit(Room &room)
{
    cout << "好友進入" <<room.bedroom << endl;  //可以訪問私有數據
    cout << "好友進入" <<room.sittingRoom << endl;
}

int main()
{
    Room room;
    visit(room);

    Friend f;
    f.visit(room);

}


