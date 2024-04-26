class Person
{
private:
    char *m_name;
    int m_num;
public:
    Person();
    Person(char *name, int num);
    Person(const Person &ob);
    ~Person();
    void showPerson();
};


