#include "manager.h"

// ���캯��
Maneger::Maneger(int id, string name, int dId)
{
    this->m_id = id;
    this->m_name = name;
    this->m_depId = dId;
}

// ��ʾ������Ϣ
void Maneger::showInfo()
{
    cout << "ְ����ţ�" << this->m_id
         << "\tְ��������" << this->m_name
         << "\t��λ��" << this->getDepName()
         << "\t��λְ������ϰ彻�������񣬲��·������Ա��" << endl;
}

// ��ȡ��λ����
string Maneger::getDepName()
{
    return string("����");
}