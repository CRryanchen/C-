#include <iostream>
using namespace std;



class Person
{
public:
    Person()
    {
        cout << "Person Ĭ�Ϲ��캯������" << endl;
    }

    Person(int age)
    {
        m_age = age;
        cout << "Person �вι��캯������" << endl;
    }

    Person(const Person  &p)
    {
        m_age = p.m_age;
        cout << "Person �������캯������" << endl;
    }

    ~Person()
    {
        cout << "Person ������������" << endl;
    }

    int m_age;
};

// �������캯������ʱ��
// 1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���

void test01()
{
    Person p1(20);
    Person p2(p1);

    cout << "p2������Ϊ��" << p2.m_age << endl;
}
// 2��ֵ���ݵķ�ʽ��������ֵ
void doWork(Person p)
{

}

void test02()
{
    Person p;
    doWork(p);
}

// 3��ֵ��ʽ���ؾֲ�����
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