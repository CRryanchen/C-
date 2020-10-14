#include <iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
    // 测试代码
    Worker * worker = NULL;
    worker = new Employee(1, "张三", 1);
    worker->showInfo();
    delete worker;

    worker = new Maneger(2, "李四", 2);
    worker->showInfo();
    delete worker;

    worker = new Boss(3, "王五", 3);
    worker->showInfo();
    delete worker;



    // // 实例化管理者对象
    // WorkManager vm;

    // int choice = 0;// 用来存储用户的选项

    // while (true)
    // {
    //     // 调用展示菜单成员函数
    //     vm.showMenu();

    //     cout << "请输入您的选择：" << endl;
    //     cin >> choice;// 接收用户的选项

    //     // 验证输入有效性

    //     switch (choice)
    //     {
    //         case 0:// 退出系统
    //             vm.exitSystem();
    //             break;
    //         case 1:// 增加职工
                
    //             break;
    //         case 2:// 显示职工
                
    //             break;
    //         case 3:// 删除职工
                
    //             break;
    //         case 4:// 修改职工
                
    //             break;
    //         case 5:// 查找职工
                
    //             break;
    //         case 6:// 排序职工
                
    //             break;
    //         case 7:// 清空文档
                
                
    //             break;
            
    //         default:
    //             system("cls");
    //             break;
    //     }
    // }
    

    return 0;
    system("pause");
}