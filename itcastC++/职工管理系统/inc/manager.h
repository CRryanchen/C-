// �����ļ�
#pragma once
#include <iostream>
#include "worker.h"
using namespace std;

// ������
class Maneger:public Worker
{
public:
    // ���캯��
    Maneger(int id, string name, int dId);

    // ��ʾ������Ϣ
    virtual void showInfo();

    // ��ȡ��λ����
    virtual string getDepName();
};
