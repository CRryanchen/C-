// 编写一个 C++ 程序，它要求用户输入一个以 long 为单位的距离，
// 然后将它转换为码（一 long 等于 220 码）
#include <iostream>
using namespace std;

int main()
{
    int longDis;
    cout << "请输入您想要计算的距离，单位为 long：" << endl;
    cin >>longDis;
    cout << "您输入的距离为 " << (longDis / 220.0) << "码" << endl;

    return 0;
}