class Data
{
private:
    int num;
public:
    /*
        �c�y��ƥi����
        1. �L�Ѻc�y���     Data data;
        2. ���Ѻc�y���     Data data(int);
        3. �����c�y���     Data data2 =  data1;
        4. �ΦW�c�y         Data()
        
        �c�y�M�R�c�����Ǭۤ� �A���c�y���̫�R�c 
    
    */
    Data();
    Data(int data);
    Data(const Data &data);
    ~Data();
};


