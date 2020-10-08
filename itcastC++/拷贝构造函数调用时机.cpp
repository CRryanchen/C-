#include <iostream>
using namespace std;



class Person
{
public:
    Person()
    {
        cout << "Person 默认构造函数调用" << endl;
    }

    Person(int age)
    {
        m_age = age;
        cout << "Person 有参构造函数调用" << endl;
    }

    Person(const Person  &p)
    {
        m_age = p.m_age;
        cout << "Person 拷贝构造函数调用" << endl;
    }

    ~Person()
    {
        cout << "Person 析构函数调用" << endl;
    }

    int m_age;
};

// 拷贝构造函数调用时机
// 1、使用一个已经创建完毕的对象来初始化一个新对象

void test01()
{
    Person p1(20);
    Person p2(p1);

    cout << "p2的年轻为：" << p2.m_age << endl;
}
// 2、值传递的方式给函数传值
void doWork(Person p)
{

}

void test02()
{
    Person p;
    doWork(p);
}

// 3、值方式返回局部对象
Person doWork2()
{
    Person p1;
    return p1;
}

void test03()
{
    Person p = doWork2();
}

void test04()
{
    Person p1(10);
    Person p2 = p1;
    //p2 = p1;
}


int main()
{
    //test01();
    //test02();
    //test03();
    test04();

    system("pause");
}