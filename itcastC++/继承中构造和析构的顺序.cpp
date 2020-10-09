#include <iostream>
using namespace std;

// 继承中的构造和析构顺序
class Base
{
public:
    Base()
    {
        cout << "Base 构造函数" << endl;
    }

    ~Base()
    {
        cout << "Base 析构函数" << endl;
    }
};

class Son: public Base
{
public:
    Son()
    {
        cout << "Son 构造函数" << endl;
    }

    ~Son()
    {
        cout << "Son 析构函数" << endl;
    }
};

class Grandson:Son
{
public:
    Grandson()
    {
        cout << "Grandson 构造函数" << endl;
    }

    ~Grandson()
    {
        cout << "Grandson 析构函数" << endl;
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