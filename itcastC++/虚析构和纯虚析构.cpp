#include <iostream>
#include <string>
using namespace std;

// 虚析构和纯虚析构
class Animal
{
public:
    Animal()
    {
        cout << "Animal 构造函数调用" << endl;
    }

    // 利用虚析构可以解决 父类指针释放子类对象不干净的问题
    // virtual ~Animal()
    // {
    //     cout << "Animal 析构函数调用" << endl;
    // }

    // 纯虚析构
    virtual ~Animal() = 0;

    // 纯虚函数
    virtual void speak() = 0;
};

Animal::~Animal()
{
    cout << "Animal 纯虚析构函数调用" << endl;
}

class Cat: public Animal
{
public:
    Cat(string name)
    {
        cout << "cat 构造函数调用" << endl;
        m_Name = new string(name);
    }

    ~Cat()
    {
        if (m_Name != NULL)
        {
            cout << "cat 析构函数调用" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }

    virtual void speak()
    {
        cout << *m_Name <<"小猫在说话" << endl;
    }

    string *m_Name;
};

void test01()
{
    Animal *animal = new Cat("汤姆");
    animal->speak();
    // 父类指针在析构时候 不会调用子类中析构函数，导致子类中如果有堆区数据，出现内存泄漏
    delete animal;
}

int main()
{
    test01();

    return 0;
}