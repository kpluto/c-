#include <stdio.h>

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
    printf("�ո�%d�����Ʊ��%d�������з�%d��.\n", a, b, d);
}