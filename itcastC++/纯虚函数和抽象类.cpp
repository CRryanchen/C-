#include <iostream>
using namespace std;


// ���麯���ͳ�����
// �ڶ�̬�У�ͨ���������麯����ʵ���Ǻ�������ģ���Ҫ���ǵ���������д������
// ���Խ��麯����Ϊ���麯��
// ���麯���﷨��virtual ����ֵ���� ������ (�����б�) = 0;
// �������˴��麯�����������ǳ�����

// �������ص㣺
// �޷�ʵ��������
// ���������д�������еĴ��麯��������Ҳ���ڳ�����

class Base
{
public:
    // ���麯��
    // ֻҪ��һ�����麯����������Ϊ������
    virtual void func() = 0;
};

class Son:public Base
{
public:
    virtual void func()
    {
        cout << "Son func��������" << endl;
    }

};

void test01()
{
    // Base b; // �������޷�ʵ��������
    // new Base; // �������޷�ʵ��������

    //Son s;// ���಻��д���麯��Ҳ�ǳ�����
    Base *base = new Son;
    base->func();

}

int main()
{
    test01();

    return 0;
}