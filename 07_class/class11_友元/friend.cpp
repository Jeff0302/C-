#include<iostream>
#include<string>
using namespace std;

class Room
{
//普通全局函數作為類的友元
friend void visit(Room &room);
private:
    string bedroom; //臥室
public:
    string sittingRoom; //客廳
    Room(){
        bedroom = "臥室";
        sittingRoom = "客廳";
    };
};

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

}
