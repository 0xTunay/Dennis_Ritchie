#include <stdio.h>


int main(void)
{
    float farh,celsius;
    int lower,upper,step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    while (celsius <= upper)
    {
        farh = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, farh);
        celsius = celsius + step;
    }

}