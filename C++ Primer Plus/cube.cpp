#include <iostream>
using namespace std;

// �����������
// 1��������������
// 2���������
// 3�������Ϊ����ȡ��������������
// 4���ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����

class Cube
{
public:
    // ���ó�
    void setL(int l)
    {
        m_L = l;
    }

    // ��ȡ��
    int getL()
    {
        return m_L;
    }

    // ���ÿ�
    void setW(int w)
    {
        m_W = w;
    }

    // ��ȡ��
    int getW()
    {
        return m_W;
    }

    // ���ø�
    void setH(int h)
    {
        m_H = h;
    }

    // ��ȡ��
    int getH()
    {
        return m_H;
    }

    // ��ȡ���������
    int calculateS()
    {
        cout << "------------------------" << endl;
        return (2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H);
    }

    // ��ȡ���������
    int calculateV()
    {
        return m_H * m_L * m_W;
    }

private:
    int m_L;// ��
    int m_W;// ��
    int m_H;// ��
};

int main()
{
    Cube c1;
    c1.setL(1);
    c1.setW(1);
    c1.setH(1);

    cout << "c1�����Ϊ��" << c1.calculateS() << endl;
    cout << "c1�����Ϊ��" << c1.calculateV() << endl;
}