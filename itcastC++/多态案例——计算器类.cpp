#include <iostream>
#include <string>
using namespace std;

// �ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����

// ��ͨд��
class Calculator
{
public:

    int getResult(string oper)
    {
        if (oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if (oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if (oper == "*")
        {
            return m_Num1 * m_Num2;
        }

        // �������չ�µĹ��ܣ���Ҫ�޸�Դ��
        // ����ʵ�����У��ᳫ����ԭ��
        // ����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
    }

    int m_Num1;
    int m_Num2;
};

void test01()
{
    // ��������������
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;
    
    cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
    cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
    cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}

// ���ö�̬ʵ�ּ�����
// ʵ�ּ�����������
class AbstractCalculator
{
public:

    virtual int getResult()
    {
        return 0;
    }

    int m_Num1;
    int m_Num2;
};

// �ӷ���������
class AddCalculator:public AbstractCalculator
{
public:
    virtual int getResult()
        {
            return m_Num1 + m_Num1;
        }
};

// ������������
class SubCalculator:public AbstractCalculator
{
public:
    virtual int getResult()
        {
            return m_Num1 - m_Num1;
        }
};

// �˷���������
class MulCalculator:public AbstractCalculator
{
public:
    virtual int getResult()
        {
            return m_Num1 * m_Num1;
        }
};

void test02()
{
    // �ӷ�����
    AbstractCalculator * abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;

    cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;

}

int main()
{
    //test01();
    test02();

    return 0;
}