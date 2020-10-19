#include <iostream>
#include <iomanip>  // 使用设置精度、宽度、填充字符控制符

int main()
{
    using namespace std;

    cout << "请输入一个整数，我会以十进制、八进制十六进制进行显示：";
    int input;
    cin >> input;
    cout << setw(15) << "dec"
         << setw(15) << "hex"
         << setw(15) << "oct" << endl;
    
    cout << showbase;// 显示前缀
    // cout << setfill('-');// 设置填充字符
    // cout << left;// 设置左对齐
    cout << setw(15) << input
         << setw(15) << hex << input
         << setw(15) << oct << input << endl;

    return 0;
}