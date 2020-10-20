#include <iostream>
#include <iomanip>
#include <string>

// 这里需要掌握后面的输入后才能完成
int main()
{
    using namespace std;

    cout << "Enetr your name: ";
    char name[8];
    cin.get(name, sizeof(name));
    if (cin.peek() != '\n')
    {
        cout << "字符数组太小，容纳不下" << endl;
    }
    while (cin.get() != '\n')// 丢弃该行剩下的内容（包括换行）
    {
        continue;
    }
    cout << "Enter hourly wages: ";
    int wage;
    cin >> wage;
    cout << "Enter of hours worked: ";
    float hours;
    cin >> hours;

    cout << "First format:" << endl;
    cout << setw(25) << name
         << ": $" << setw(8) << wage << ":"
         << setw(9) << hours << endl;

    cout << left;// 左对齐
    cout << "Second format:" << endl;
    cout << setw(25) << name
         << ": $" << setw(8) << wage << ":"
         << setw(9) << hours << endl;
}