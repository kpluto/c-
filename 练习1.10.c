
#include <stdio.h>

int main()
{
    int c, d;

    while ((c = getchar()) != EOF)
    {
        d = 0;	 //必须设置标志位，d=0表示直接原样打印输出
        if (c == '\\') {	//检测到输入中有1个反斜杠\，此处写法c =='\\'是正确的。
            putchar('\\');
            putchar('\\');
            d = 1;
        }
        if (c == '\t') {	//检测到输入中有一个隐式的制表符
            putchar('\\');
            putchar('t');
            d = 1;	        //将标志位置1，防止输出\t后，继续输出1个隐式的制表符形式
        }
        if (c == '\b') {	//注：检测到有一个回退符。没有搞清楚如何输入？？ 
            putchar('\\');
            putchar('b');
            d = 1;
        }
        if (d == 0)		//如果输入中不含有上述三种符号，直接原样打印输出。
            putchar(c);
    }
}