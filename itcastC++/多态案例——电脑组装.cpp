#include <iostream>
using namespace std;

// ����ͬ�����
// ����CPU��
class CPU
{
public:
    // ����ļ��㺯��
    virtual void calculate() = 0;
};

// �����Կ���
class VideoCard
{
public:
    // �������ʾ����
    virtual void display() = 0;
};

// �����ڴ�����
class Memory
{
public:
    // ����Ĵ洢����
    virtual void storage() = 0;
};

// ������
class Computer
{
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }

    // �ṩ�����ĺ���
    void work()
    {
        // ��������ӿ�
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }

    // �ṩ�������� �ͷ�3���������
    ~Computer()
    {
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }

        if (m_vc != NULL)
        {
            delete m_vc;
            m_vc = NULL;
        }

        if (m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
        }
    }

private:
    CPU * m_cpu;  // CPU�����ָ��
    VideoCard * m_vc; // �Կ����ָ��
    Memory * m_mem;// �ڴ������ָ��
};

// ���峧��
// Intel ����
class IntelCPU:public CPU
{
public:
    virtual void calculate()
    {
        cout << "Intel ��CPU��ʼ�����ˣ�" << endl;
    }
};

class IntelVideoCard:public VideoCard
{
public:
    virtual void display()
    {
        cout << "Intel ���Կ���ʼ��ʾ�ˣ�" << endl;
    }
};

class IntelMemory:public Memory
{
public:
    virtual void storage()
    {
        cout << "Intel ���ڴ�����ʼ�洢�ˣ�" << endl;
    }
};

// Lenovo ����
class LenovoCPU:public CPU
{
public:
    virtual void calculate()
    {
        cout << "Lenovo ��CPU��ʼ�����ˣ�" << endl;
    }
};

class LenovoVideoCard:public VideoCard
{
public:
    virtual void display()
    {
        cout << "Lenovo ���Կ���ʼ��ʾ�ˣ�" << endl;
    }
};

class LenovoMemory:public Memory
{
public:
    virtual void storage()
    {
        cout << "Lenovo ���ڴ�����ʼ�洢�ˣ�" << endl;
    }
};

void test01()
{
    // ��һ̨�������
    CPU *intelCpu = new IntelCPU;
    VideoCard *intelVideoCard = new IntelVideoCard;
    Memory * intelMemory = new IntelMemory;

    // ������һ̨����
    Computer * computer1 = new Computer(intelCpu, intelVideoCard, intelMemory);
    computer1->work();
    delete computer1;

    cout << "-----------------" << endl;

    // �ڶ�̨�������
    CPU *lenovoCpu = new LenovoCPU;
    VideoCard *lenovoVideoCard = new LenovoVideoCard;
    Memory * lenovoMemory = new LenovoMemory;

    // �����ڶ�̨����
    Computer * computer2 = new Computer(lenovoCpu, lenovoVideoCard, lenovoMemory);
    computer2->work();
    delete computer2;
}

int main()
{
    test01();

    return 0;
}