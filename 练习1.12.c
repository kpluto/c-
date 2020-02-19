#include <stdio.h>

int main()
{
    int c, d;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            putchar('\n');
         else putchar(c);
    }

}