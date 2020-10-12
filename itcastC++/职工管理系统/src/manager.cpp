#include "manager.h"

// 构造函数
Maneger::Maneger(int id, string name, int dId)
{
    this->m_id = id;
    this->m_name = name;
    this->m_depId = dId;
}

// 显示个人信息
void Maneger::showInfo()
{
    cout << "职工编号：" << this->m_id
         << "\t职工姓名：" << this->m_name
         << "\t岗位：" << this->getDepName()
         << "\t岗位职责：完成老板交给的任务，并下发任务给员工" << endl;
}

// 获取岗位名称
string Maneger::getDepName()
{
    return string("经理");
}