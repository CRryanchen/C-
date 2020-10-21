// 编程练习 1
#include <iostream>

int main()
{
    using namespace std;
    cout << "请输入数据，我会计算您输入的$之前的字符数目:\n";
    unsigned int cnt = 0;
    char ch;
    while (cin.get(ch))
    {
        if (ch == '$')
        {
            cin.putback(ch);
            break;
        }
        else
        {
            cnt++;
            cout << ch;
        }
    }
    cout << "\n" << "您一共输入了" << cnt << "个字符" << endl;
    if (!cin.eof()) // 如果不是到达文件尾
    {
        cin.get(ch);
        // 验证下一个字符
        cout << "下一个字符是" << ch << endl;
    }
    else
    {
        // 到达文件尾
        cout << "到达了文件尾部" << endl;
    }

    return 0;
}