#include <iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
    // ���Դ���
    Worker * worker = NULL;
    worker = new Employee(1, "����", 1);
    worker->showInfo();
    delete worker;

    worker = new Maneger(2, "����", 2);
    worker->showInfo();
    delete worker;

    worker = new Boss(3, "����", 3);
    worker->showInfo();
    delete worker;



    // // ʵ���������߶���
    // WorkManager vm;

    // int choice = 0;// �����洢�û���ѡ��

    // while (true)
    // {
    //     // ����չʾ�˵���Ա����
    //     vm.showMenu();

    //     cout << "����������ѡ��" << endl;
    //     cin >> choice;// �����û���ѡ��

    //     // ��֤������Ч��

    //     switch (choice)
    //     {
    //         case 0:// �˳�ϵͳ
    //             vm.exitSystem();
    //             break;
    //         case 1:// ����ְ��
                
    //             break;
    //         case 2:// ��ʾְ��
                
    //             break;
    //         case 3:// ɾ��ְ��
                
    //             break;
    //         case 4:// �޸�ְ��
                
    //             break;
    //         case 5:// ����ְ��
                
    //             break;
    //         case 6:// ����ְ��
                
    //             break;
    //         case 7:// ����ĵ�
                
                
    //             break;
            
    //         default:
    //             system("cls");
    //             break;
    //     }
    // }
    

    return 0;
    system("pause");
}