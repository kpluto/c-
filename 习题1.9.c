#include <stdio.h>
/*��ϰ 1-9 ��дһ�������븴�Ƶ�����ĳ��򣬲������������Ķ���ո���һ���ո���档*/
int main()
{
    int c, space = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++space;
        else
            space = 0;
        if (space <= 1)
            putchar(c);
    }
 
    return 0;
}


