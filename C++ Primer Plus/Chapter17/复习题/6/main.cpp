#include <iostream>
#include <iomanip>  // ʹ�����þ��ȡ���ȡ�����ַ����Ʒ�

int main()
{
    using namespace std;

    cout << "������һ���������һ���ʮ���ơ��˽���ʮ�����ƽ�����ʾ��";
    int input;
    cin >> input;
    cout << setw(15) << "dec"
         << setw(15) << "hex"
         << setw(15) << "oct" << endl;
    
    cout << showbase;// ��ʾǰ׺
    // cout << setfill('-');// ��������ַ�
    // cout << left;// ���������
    cout << setw(15) << input
         << setw(15) << hex << input
         << setw(15) << oct << input << endl;

    return 0;
}