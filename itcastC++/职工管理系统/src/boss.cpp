#include "boss.h"

// ���캯��
Boss::Boss(int id, string name, int dId)
{
    this->m_id = id;
    this->m_name = name;
    this->m_depId = dId;
}

// ��ʾ������Ϣ
void Boss::showInfo()
{
    cout << "ְ����ţ�" << this->m_id
         << "\tְ��������" << this->m_name
         << "\t��λ��" << this->getDepName()
         << "\t��λְ�𣺹���˾��������" << endl;
}

// ��ȡ��λ����
string Boss::getDepName()
{
    return string("�ܲ�");
}