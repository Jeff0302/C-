#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int count=0;

    vector<int> v;
    for(int i=0;i<100;i++)
    {
        int *pre = &v[0];

        v.push_back(i);
        //只要size大於capacity，容器會capacity會加倍，並另尋地址。
        /*
            0x1be4fd023a0
            v的capacity= 1
            v的size= 1
            ---------------------------------
            0x1be4fd06160
            v的capacity= 2
            v的size= 2
            ---------------------------------
            0x1be4fd023a0
            v的capacity= 4
            v的size= 3
            ---------------------------------
            0x1be4fd023a0
            v的capacity= 4
            v的size= 4
            ---------------------------------
            0x1be4fd06160
            v的capacity= 8
            v的size= 5
            ---------------------------------
            0x1be4fd06160
            v的capacity= 8
            v的size= 6
            ---------------------------------
            0x1be4fd06160
            v的capacity= 8
            v的size= 7
            ---------------------------------
            0x1be4fd06160
            v的capacity= 8
            v的size= 8
            ---------------------------------
            0x1be4fd06190
            v的capacity= 16
            v的size= 9
            ---------------------------------
            0x1be4fd06190
            v的capacity= 16
            v的size= 10
            ---------------------------------
            0x1be4fd06190
            v的capacity= 16
            v的size= 11
            ---------------------------------
            0x1be4fd06190
            v的capacity= 16
            v的size= 12
            ---------------------------------
            0x1be4fd06190
            v的capacity= 16
            v的size= 13
            ---------------------------------

        */
        cout << &v[0] << endl;
        int *next = &v[0];

        if(next != pre)
            count++;

        cout << "v的capacity= " << v.capacity() << endl;
        cout << "v的size= " << v.size() << endl;
        
        cout << "---------------------------------" << endl;
    }  
    cout << "另尋地址次數= " << count << endl;
    // cout << "v的capacity= " << v.capacity() << endl;
    // cout << "v的size= " << v.size() << endl;
}

