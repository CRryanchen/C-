#include <iostream>
#include <iomanip>
#include <string>

// ������Ҫ���պ���������������
int main()
{
    using namespace std;

    cout << "Enetr your name: ";
    string name;
    cin >> name;
    cin.get();
    cout << "Enter hourly wages: ";
    int wage;
    cin >> wage;
    cin.get();
    cout << "Enter of hours worked: ";
    float hours;
    cin >> hours;

    cout << "First format:" << endl;
    cout << setw(20) << name
         << ": $" << setw(8) << wage
         << setw(9) << hours << endl;
}