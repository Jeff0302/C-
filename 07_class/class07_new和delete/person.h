class Person
{
private:
    char m_name[32];
    int m_num;
public:
    Person();
    Person(char *name, int number);
    ~Person();
    void showInfo();
};