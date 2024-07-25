#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){

    map<string, string> map1;
    //�s�W�覡1
    map1.insert(pair<string, string>("key1", "value1"));
    //�s�W�覡2
    map1.insert(make_pair("key2", "value2"));
    //�s�W�覡3
    map1.insert(map<string, string>::value_type("key3", "value3"));
    //Ūmap�ƾڮɱ���
    map1["key4"] = "value4";


    for_each(map1.begin(), map1.end(), [](const pair<string, string> &pair1){ 
        cout << pair1.first << ", "<< pair1.second << endl; });


    //�u�Q�d��key=="key1"�����
    cout << map1["key1"] << endl; 
    
    map<string, string>::const_iterator it = map1.find("key2");
    if(it==map1.end())
    {
        cout << "key2���s�b";
    }
    else{
        cout << "key2�s�b, " <<(*it).second;
    }
  

}