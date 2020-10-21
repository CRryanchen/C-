# 题目
编写一个程序，它打开两个文本进行输入，打开一个文本进行输出。该程序将两个输入文件中对应的行并接起来，并用空格分隔，然后将结果写入到输出文件中。如果一个文件比另一个文件短，则将较长文件中余下的几行直接复制到输出文件中。例如，假设第一个输入文件的内容入如下：
```
eggs kites donuts
balloons hammers
stones
```
而第二个输入文件的内容如下：
```
zero lassitude
finance drama
```
则得到的文件的内容将如下：
```
eggs kites donuts zero lassitude
balloons hammers finance drama
stones
```