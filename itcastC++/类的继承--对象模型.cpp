#include <iostream>
using namespace std;

class Base1
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1:public Base1
{
public:
    int m_D;
};

void tset01()
{
    Son1 s1;
    cout << "sizeof(s1) = " << sizeof(s1) << endl;
}

int main()
{
    tset01();

    return 0;
}