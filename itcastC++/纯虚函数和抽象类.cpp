#include <iostream>
using namespace std;


// 纯虚函数和抽象类
// 在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
// 可以将虚函数改为纯虚函数
// 纯虚函数语法：virtual 返回值类型 函数名 (参数列表) = 0;
// 当类有了纯虚函数，这个类就是抽象类

// 抽象类特点：
// 无法实例化对象
// 子类必须重写抽象类中的纯虚函数，否则也属于抽象类

class Base
{
public:
    // 纯虚函数
    // 只要有一个纯虚函数，这个类称为抽象类
    virtual void func() = 0;
};

class Son:public Base
{
public:
    virtual void func()
    {
        cout << "Son func函数调用" << endl;
    }

};

void test01()
{
    // Base b; // 抽象类无法实例化对象
    // new Base; // 抽象类无法实例化对象

    //Son s;// 子类不重写纯虚函数也是抽象类
    Base *base = new Son;
    base->func();

}

int main()
{
    test01();

    return 0;
}