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
        //�u�nsize�j��capacity�A�e���|capacity�|�[���A�åt�M�a�}�C
        /*
            0x1be4fd023a0
            v��capacity= 1
            v��size= 1
            ---------------------------------
            0x1be4fd06160
            v��capacity= 2
            v��size= 2
            ---------------------------------
            0x1be4fd023a0
            v��capacity= 4
            v��size= 3
            ---------------------------------
            0x1be4fd023a0
            v��capacity= 4
            v��size= 4
            ---------------------------------
            0x1be4fd06160
            v��capacity= 8
            v��size= 5
            ---------------------------------
            0x1be4fd06160
            v��capacity= 8
            v��size= 6
            ---------------------------------
            0x1be4fd06160
            v��capacity= 8
            v��size= 7
            ---------------------------------
            0x1be4fd06160
            v��capacity= 8
            v��size= 8
            ---------------------------------
            0x1be4fd06190
            v��capacity= 16
            v��size= 9
            ---------------------------------
            0x1be4fd06190
            v��capacity= 16
            v��size= 10
            ---------------------------------
            0x1be4fd06190
            v��capacity= 16
            v��size= 11
            ---------------------------------
            0x1be4fd06190
            v��capacity= 16
            v��size= 12
            ---------------------------------
            0x1be4fd06190
            v��capacity= 16
            v��size= 13
            ---------------------------------

        */
        cout << &v[0] << endl;
        int *next = &v[0];

        if(next != pre)
            count++;

        cout << "v��capacity= " << v.capacity() << endl;
        cout << "v��size= " << v.size() << endl;
        
        cout << "---------------------------------" << endl;
    }  
    cout << "�t�M�a�}����= " << count << endl;
    // cout << "v��capacity= " << v.capacity() << endl;
    // cout << "v��size= " << v.size() << endl;
}

