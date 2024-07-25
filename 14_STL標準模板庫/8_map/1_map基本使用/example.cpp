#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){

    map<string, string> map1;
    //新增方式1
    map1.insert(pair<string, string>("key1", "value1"));
    //新增方式2
    map1.insert(make_pair("key2", "value2"));
    //新增方式3
    map1.insert(map<string, string>::value_type("key3", "value3"));
    //讀map數據時推薦
    map1["key4"] = "value4";


    for_each(map1.begin(), map1.end(), [](const pair<string, string> &pair1){ 
        cout << pair1.first << ", "<< pair1.second << endl; });


    //只想查看key=="key1"的實值
    cout << map1["key1"] << endl; 
    
    map<string, string>::const_iterator it = map1.find("key2");
    if(it==map1.end())
    {
        cout << "key2不存在";
    }
    else{
        cout << "key2存在, " <<(*it).second;
    }
  

}