#include <stdio.h>
/*练习 1-9 编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替。*/
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


