// 编程练习4
#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    using namespace std;

    // 输入文件对象
    ifstream fin1, fin2;
    fin1.open("./1.txt");
    if (!fin1.is_open())
    {
        cerr << "fin1 打开失败\n";
        exit(EXIT_FAILURE);
    }
    
    fin2.open("./2.txt");
    if (!fin2.is_open())
    {
        cerr << "fin2 打开失败\n";
        exit(EXIT_FAILURE);
    }

    // 输出文件对象
    ofstream fout;
    fout.open("3.txt");
    if (!fout.is_open())
    {
        cerr << "fout 打开失败\n";
        exit(EXIT_FAILURE);
    }

    char buf1[128];
    char buf2[128];

    // 读取两个文件都有的行
    while (!fin1.eof() && !fin2.eof())
    {
        fin1.getline(buf1, sizeof(buf1));
        fin2.getline(buf2, sizeof(buf2));
        cout << buf1 << "  --  " << buf2 << endl;
        fout << buf1 << "  --  " << buf2 << endl;
    }
    
    // 如果文件1没有读完，读取剩下的
    while (!fin1.eof())
    {
        fin1.getline(buf1, sizeof(buf1));
        cout << buf1 << endl;
        fout << buf1 << endl;// 这里加换行结尾会多出换行符
    }

    // 如果文件2没有读完，读取剩下的
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
