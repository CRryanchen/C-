# 题目
1、iostream文件在C++ I/O扮演何种角色？
> iostream文件定义了用于管理输入和输出的类、常量和操纵符，这些对象管理用于处理I/O的流和缓冲区。该文件还创建了一些标准对象（cin、cout、cerr和clog以及对应的宽字符对象），用于处理与每个程序相连的标准输入和输出流。

2、为什么键入数字（如121）作为输入要求程序进行转换？
> 键盘输入生成一系列字符。输入121将生成3个字符，每个字符都由一个1字节的二进制码表示，要将这个值存储为int类型，则必须将这3个字符转换为121值的二进制表示。

3、标准输出与标准错误之间有什么区别？
> 在默认情况下，标准输出和标准错误都将输出发送给标准输出设备（通常为显示器）。然而，如果要求操作系统将输出重定向到文件，则标准输出将与文件（而不是显示器）相连，但标准错误仍与显示器相连。

4、为什么不为每个类型提供明确指示的情况下，cout仍能够显示不同的C++类型？
> ostream类为每种C++基本类型定义了一个operator<<()函数的版本。编译器将下面的表达式：`cout << spot`解释为`cout.operator<<(spot)`，这样，它便能够将该方法调用与具有相同参数类型的函数原型匹配。

5、输出方法的定义的哪一特征让您能够拼接输出？
> 可以将返回ostream &类型的输出方法拼接。这样，通过一个对象调用方法时，将返回该对象。然后，返回对象将可以调用序列中的下一个方法。