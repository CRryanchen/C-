// �����ϰ4
#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    using namespace std;

    // �����ļ�����
    ifstream fin1, fin2;
    fin1.open("./1.txt");
    if (!fin1.is_open())
    {
        cerr << "fin1 ��ʧ��\n";
        exit(EXIT_FAILURE);
    }
    
    fin2.open("./2.txt");
    if (!fin2.is_open())
    {
        cerr << "fin2 ��ʧ��\n";
        exit(EXIT_FAILURE);
    }

    // ����ļ�����
    ofstream fout;
    fout.open("3.txt");
    if (!fout.is_open())
    {
        cerr << "fout ��ʧ��\n";
        exit(EXIT_FAILURE);
    }

    char buf1[128];
    char buf2[128];

    // ��ȡ�����ļ����е���
    while (!fin1.eof() && !fin2.eof())
    {
        fin1.getline(buf1, sizeof(buf1));
        fin2.getline(buf2, sizeof(buf2));
        cout << buf1 << "  --  " << buf2 << endl;
        fout << buf1 << "  --  " << buf2 << endl;
    }
    
    // ����ļ�1û�ж��꣬��ȡʣ�µ�
    while (!fin1.eof())
    {
        fin1.getline(buf1, sizeof(buf1));
        cout << buf1 << endl;
        fout << buf1 << endl;// ����ӻ��н�β�������з�
    }

    // ����ļ�2û�ж��꣬��ȡʣ�µ�
    while (!fin2.eof())
    {
        fin2.getline(buf2, sizeof(buf2));
        cout << buf2 << endl;
        fout << buf2 << endl;
    }
    
    fin1.close();
    fin2.close();
    fout.close();

    return 0;
}
