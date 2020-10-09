#include <iostream>
#include <string>
using namespace std;

// �������ʹ�������
class Animal
{
public:
    Animal()
    {
        cout << "Animal ���캯������" << endl;
    }

    // �������������Խ�� ����ָ���ͷ�������󲻸ɾ�������
    // virtual ~Animal()
    // {
    //     cout << "Animal ������������" << endl;
    // }

    // ��������
    virtual ~Animal() = 0;

    // ���麯��
    virtual void speak() = 0;
};

Animal::~Animal()
{
    cout << "Animal ����������������" << endl;
}

class Cat: public Animal
{
public:
    Cat(string name)
    {
        cout << "cat ���캯������" << endl;
        m_Name = new string(name);
    }

    ~Cat()
    {
        if (m_Name != NULL)
        {
            cout << "cat ������������" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }

    virtual void speak()
    {
        cout << *m_Name <<"Сè��˵��" << endl;
    }

    string *m_Name;
};

void test01()
{
    Animal *animal = new Cat("��ķ");
    animal->speak();
    // ����ָ��������ʱ�� �������������������������������������ж������ݣ������ڴ�й©
    delete animal;
}

int main()
{
    test01();

    return 0;
}