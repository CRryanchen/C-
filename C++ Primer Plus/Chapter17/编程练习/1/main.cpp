// �����ϰ 1
#include <iostream>

int main()
{
    using namespace std;
    cout << "���������ݣ��һ�����������$֮ǰ���ַ���Ŀ:\n";
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
    cout << "\n" << "��һ��������" << cnt << "���ַ�" << endl;
    if (!cin.eof()) // ������ǵ����ļ�β
    {
        cin.get(ch);
        // ��֤��һ���ַ�
        cout << "��һ���ַ���" << ch << endl;
    }
    else
    {
        // �����ļ�β
        cout << "�������ļ�β��" << endl;
    }

    return 0;
}