#include <iostream>
using namespace std;

// ��̬

// ������
class Animal
{
public:
    // �麯��
    virtual void speak()
    {
        cout << "������˵��" << endl;
    }
};

// è��
class Cat: public Animal
{
public:
    void speak()
    {
        cout << "Сè��˵��" << endl;
    }
};

// ����
class Dog: public Animal
{
public:
    void speak()
    {
        cout << "С����˵��" << endl;
    }
};

// ����è
class CoffeCat:public Cat
{
public:
    // void speak()
    // {
    //     cout << "����è��˵��" << endl;
    // }
};

// ִ��˵���ĺ���
// ��ַ��� �ڱ���׶�ȷ��������ַ
// �����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣�����ַ���

// ��̬��̬����������
// �м̳й�ϵ
// ������д������麯��
// ��д ��������ֵ���� ������ �����б� ��ȫ��ͬ

// ��̬��̬ʹ��
// �����ָ������ã�ִ���������
void doSpeak(Animal &animal)
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
    CoffeCat ccat;
    doSpeak(ccat);
}

int main()
{
    test01();

    return 0;
}