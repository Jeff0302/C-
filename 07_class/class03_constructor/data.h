class Data
{
private:
    int num;
public:
    /*
        篶硑ㄧ计だ
        1. 礚把篶硑ㄧ计     Data data;
        2. Τ把篶硑ㄧ计     Data data(int);
        3. ī篶硑ㄧ计     Data data2 =  data1;
        4. 拔篶硑         Data()
        
        篶硑㎝猂篶抖は 篶硑程猂篶 
    
    */
    Data();
    Data(int data);
    Data(const Data &data);
    ~Data();
};


