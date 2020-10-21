// 编程练习2
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char * argv[])
{
    using namespace std;
    
    if (argc != 2)
    {
        cerr << " Usage: " <<  argv[0] << " ./ filename\n";
        exit(EXIT_FAILURE);
    }

    ofstream fout;
    fout.open(argv[1]);
    if (!fout.is_open())
    {
        cerr << "打开文件错误" << endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        cout << "打开文件成功" << endl;
    }
    
    char ch;
    while (cin.get(ch))
    {
        cout << ch;
        fout << ch;
    }
    fout.close();

    return 0;
}