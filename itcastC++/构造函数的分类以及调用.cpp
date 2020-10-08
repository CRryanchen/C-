#include <iostream>
using namespace std;

// 1、构造函数的分类及调用
// 分类
// 按照参数分类     无参构造(默认构造)和有参构造
// 按照类型分类     普通构造和拷贝构造
class Person
{
public:
    // 构造函数
    Person()
    {
        cout << "Person 的无参构造函数调用" << endl;
    }

    Person(int a)
    {
        age = a;
        cout << "Person 的有参构造函数调用" << endl;
    }

    // 拷贝构造函数
    Person(const Person &p)
    {
        // 将传入的人身上的所有属性，拷贝过来
        age = p.age;
        cout << "Person 的拷贝构造函数调用" << endl;
    }

    // 析构函数
    ~Person()
    {
        cout << "Person 的析构函数调用" << endl;
    }

    int age;
};

void test01()
{
    // 1、括号法
    // Person p1;// 默认构造函数调用
    // Person p2(10);// 有参构造函数
    // Person p3(p2);// 拷贝构造函数

    // // 注意事项
    // // 调用默认构造函数时候，不要加小括号
    // // Person p1(); 这句话是函数声明而不是默认构造函数的调用，避免二义性
    // cout << "p2的年龄为：" << p2.age << endl;
    // cout << "p3的年龄为：" << p3.age << endl;
    // cout << "p1的年龄为：" << p1.age << endl;

    // 2、显示法、
    Person p1;
    Person p2 = Person(10);// 有参构造
    Person p3 = Person(p2);// 拷贝构造

    // Person(10);// 匿名对象，特点：当前行执行结束后，系统会立刻回收匿名对象
    // cout << "aaaa" << endl;

    // 注意实现2
    // 不要利用拷贝构造函数，初始化匿名对象
    // 编译器会认为 Person(p3) = Person p3
    //Person(p3);

    // 3、隐式转换法
    // 只适用于1个参数的构造函数
    Person p4 = 10;// 相当于 写了 Person p4 = Person(10);
    Person p5 = p4;
}


int main()
{
    test01();

    system("pause");
}