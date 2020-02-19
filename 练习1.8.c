#include <stdio.h>
//编写一个统计空格、制表符与换行符个数的程序
main()
{
    int c,a,b,d;
    a= 0;
    b = 0;
    d = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++a;
        if (c == '|')
            ++b;
        if (c == '\n')
            ++d;
    }
    printf("空格%d个，制表符%d个，换行符%d个.\n", a, b, d);
}
