#include <iostream>
using namespace std;
// 构造函数的调用规则
// 1、创建一个类，C++编译器会给每个类添加至少三个函数
// 默认构造（空实现）
// 析构函数（空实现）
// 拷贝构造（值拷贝）

// 2、如果我们写了有参构造函数，编译器就不再提供默认构造函数，依然提供拷贝构造
// 3、如果我们写了拷贝构造函数，编译器就不再提供其他构造函数
class Person
{
public:
    // Person()
    // {
    //     cout << "Person 的默认构造函数" << endl;
    // }

    // Person(int age)
    // {
    //     cout << "Person 的有参构造函数" << endl;
    //     m_age = age;
    // }

    Person(const Person &p)
    {
        cout << "Person 的拷贝构造函数" << endl;
        m_age = p.m_age;
    }

    ~Person()
    {
        cout << "Person 的析构函数" << endl;
    }

    int m_age;
};

// void test01()
// {
//     Person p;
//     p.m_age = 28;

//     Person p2(p);

//     cout << "p2的年龄为：" << p2.m_age << endl;
// }

void test02()
{
    //Person p(38);
    //Person p2(p);
    Person p;

    cout << "p2的年龄为：" << p2.m_age << endl;
}

int main()
{
    //test01();
    test02();
    system("pause");

    return 0;
}