#include <iostream>
#include <iomanip>
#include <string>

// ������Ҫ���պ���������������
int main()
{
    using namespace std;

    cout << "Enetr your name: ";
    char name[8];
    cin.get(name, sizeof(name));
    if (cin.peek() != '\n')
    {
        cout << "�ַ�����̫С�����ɲ���" << endl;
    }
    while (cin.get() != '\n')// ��������ʣ�µ����ݣ��������У�
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

    cout << left;// �����
    cout << "Second format:" << endl;
    cout << setw(25) << name
         << ": $" << setw(8) << wage << ":"
         << setw(9) << hours << endl;
}