# 题目
对于下面的程序：
```c++
// rg17-8.cpp
#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int ct1 = 0;

    cin >> ch;
    while (ch != 'q')
    {
        ct1++;
        cin >> ch;
    }
    
    int ct2 = 0;
    cin.get(ch);
    while (ch != 'q')
    {
        ct2++;
        cin.get(ch);
    }
    cout << "ct1 = " << ct1 << "; ct2 = "
         << ct2 << "\n";

    return 0;
}
```
如果输入如下，该程序将打印什么内容？

`I see a q<Enter>`

`I see a q<Enter>`

其中，<Enter>表示回车