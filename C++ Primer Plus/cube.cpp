#include <iostream>
using namespace std;

// 立方体类设计
// 1、创建立方体类
// 2、设计属性
// 3、设计行为，获取立方体面积和体积
// 4、分别利用全局函数和成员函数 判断两个立方体是否相等

class Cube
{
public:
    // 设置长
    void setL(int l)
    {
        m_L = l;
    }

    // 获取长
    int getL()
    {
        return m_L;
    }

    // 设置宽
    void setW(int w)
    {
        m_W = w;
    }

    // 获取宽
    int getW()
    {
        return m_W;
    }

    // 设置高
    void setH(int h)
    {
        m_H = h;
    }

    // 获取高
    int getH()
    {
        return m_H;
    }

    // 获取立方体面积
    int calculateS()
    {
        cout << "------------------------" << endl;
        return (2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H);
    }

    // 获取立方体体积
    int calculateV()
    {
        return m_H * m_L * m_W;
    }

private:
    int m_L;// 长
    int m_W;// 宽
    int m_H;// 高
};

int main()
{
    Cube c1;
    c1.setL(1);
    c1.setW(1);
    c1.setH(1);

    cout << "c1的面积为：" << c1.calculateS() << endl;
    cout << "c1的体积为：" << c1.calculateV() << endl;
}