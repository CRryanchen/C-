#include <iostream>
using namespace std;

// �̳��еĹ��������˳��
class Base
{
public:
    Base()
    {
        cout << "Base ���캯��" << endl;
    }

    ~Base()
    {
        cout << "Base ��������" << endl;
    }
};

class Son: public Base
{
public:
    Son()
    {
        cout << "Son ���캯��" << endl;
    }

    ~Son()
    {
        cout << "Son ��������" << endl;
    }
};

class Grandson:Son
{
public:
    Grandson()
    {
        cout << "Grandson ���캯��" << endl;
    }

    ~Grandson()
    {
        cout << "Grandson ��������" << endl;
    }
};

void test01()
{
    //Base b;
    //Son s;
    Grandson g;
}

int main()
{
    test01();

    return 0;
}