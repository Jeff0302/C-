class Data
{
private:
    int m_a;
public:
    //禁止隱式轉換調用
    explicit Data(int a);
    ~Data();
};
