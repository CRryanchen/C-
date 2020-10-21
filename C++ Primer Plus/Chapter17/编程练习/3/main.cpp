// 编程练习3
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

    // 打开源文件
    ifstream fin;
    fin.open(argv[1], ios_base::in | ios_base::binary);
    if (fin.is_open())
    {
        cout << "打开 " << argv[1] << " 文件成功\n";
    }
    else
    {
        cout << "打开源文件失败" << endl;
    }

    // 打开目标文件
    ofstream fout;
    fout.open(argv[2], ios_base::out | ios_base::trunc | ios_base::binary);
    if (fout.is_open())
    {
        cout << "打开 " << argv[2] << " 文件成功\n";
    }
    else
    {
        cout << "打开目标文件失败" << endl;
    }

    char buf[50];
    while (!fin.eof())
    {
        fin.read(buf, sizeof(buf));
        fout.write(buf, fin.gcount());
    }
    
    cout << "拷贝完毕！\n";
    
    fin.close();
    fout.close();

    return 0;
}