// �����ϰ3
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char * argv[])
{
    using namespace std;

    if (argc != 3)
    {
        cerr << " Usage: " <<  argv[0] << " sourceFilename destFilename\n";
        exit(EXIT_FAILURE);
    }

    // ��Դ�ļ�
    ifstream fin;
    fin.open(argv[1], ios_base::in | ios_base::binary);
    if (fin.is_open())
    {
        cout << "�� " << argv[1] << " �ļ��ɹ�\n";
    }
    else
    {
        cout << "��Դ�ļ�ʧ��" << endl;
    }

    // ��Ŀ���ļ�
    ofstream fout;
    fout.open(argv[2], ios_base::out | ios_base::trunc | ios_base::binary);
    if (fout.is_open())
    {
        cout << "�� " << argv[2] << " �ļ��ɹ�\n";
    }
    else
    {
        cout << "��Ŀ���ļ�ʧ��" << endl;
    }

    char buf[50];
    while (!fin.eof())
    {
        fin.read(buf, sizeof(buf));
        fout.write(buf, fin.gcount());
    }
    
    cout << "������ϣ�\n";
    
    fin.close();
    fout.close();

    return 0;
}