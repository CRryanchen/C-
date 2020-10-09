#include <iostream>
using namespace std;

// 抽象不同零件类
// 抽象CPU类
class CPU
{
public:
    // 抽象的计算函数
    virtual void calculate() = 0;
};

// 抽象显卡类
class VideoCard
{
public:
    // 抽象的显示函数
    virtual void display() = 0;
};

// 抽象内存条类
class Memory
{
public:
    // 抽象的存储函数
    virtual void storage() = 0;
};

// 电脑类
class Computer
{
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }

    // 提供工作的函数
    void work()
    {
        // 调用零件接口
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }

    // 提供析构函数 释放3个电脑零件
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
    CPU * m_cpu;  // CPU的零件指针
    VideoCard * m_vc; // 显卡零件指针
    Memory * m_mem;// 内存条零件指针
};

// 具体厂商
// Intel 厂商
class IntelCPU:public CPU
{
public:
    virtual void calculate()
    {
        cout << "Intel 的CPU开始计算了！" << endl;
    }
};

class IntelVideoCard:public VideoCard
{
public:
    virtual void display()
    {
        cout << "Intel 的显卡开始显示了！" << endl;
    }
};

class IntelMemory:public Memory
{
public:
    virtual void storage()
    {
        cout << "Intel 的内存条开始存储了！" << endl;
    }
};

// Lenovo 厂商
class LenovoCPU:public CPU
{
public:
    virtual void calculate()
    {
        cout << "Lenovo 的CPU开始计算了！" << endl;
    }
};

class LenovoVideoCard:public VideoCard
{
public:
    virtual void display()
    {
        cout << "Lenovo 的显卡开始显示了！" << endl;
    }
};

class LenovoMemory:public Memory
{
public:
    virtual void storage()
    {
        cout << "Lenovo 的内存条开始存储了！" << endl;
    }
};

void test01()
{
    // 第一台电脑零件
    CPU *intelCpu = new IntelCPU;
    VideoCard *intelVideoCard = new IntelVideoCard;
    Memory * intelMemory = new IntelMemory;

    // 创建第一台电脑
    Computer * computer1 = new Computer(intelCpu, intelVideoCard, intelMemory);
    computer1->work();
    delete computer1;

    cout << "-----------------" << endl;

    // 第二台电脑零件
    CPU *lenovoCpu = new LenovoCPU;
    VideoCard *lenovoVideoCard = new LenovoVideoCard;
    Memory * lenovoMemory = new LenovoMemory;

    // 创建第二台电脑
    Computer * computer2 = new Computer(lenovoCpu, lenovoVideoCard, lenovoMemory);
    computer2->work();
    delete computer2;
}

int main()
{
    test01();

    return 0;
}