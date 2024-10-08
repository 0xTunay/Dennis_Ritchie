#include <stdio.h>

int main(void)
{
    int c;
    while((c =getchar()) != EOF)
    {
        putchar(c);
        printf("%d",c != EOF);
    }
    return 0;
}