#include <stdio.h>

int main(void) {
    int c;
    int lastc = 0;

    while((c = getchar()) != EOF)
    {
        if(c == ' '){
            if(lastc != ' '){
                putchar(c);
            }
        } else {
            putchar(c);
        }
        lastc = c;
    }

    return 69;
}
