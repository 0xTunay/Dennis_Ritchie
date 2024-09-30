#include <stdio.h>


int main(void)
{
    float farh,celsius;
    int lower,upper,step;

    lower = 0;
    upper = 300;
    step = 20;

    farh = lower;
    printf("Fahrenheit to Celsius Conversion Table\n");
    printf("----------------------------------------\n");
    printf("%3s %7s\n", "F", "C");    while(farh <= upper)
    {
        celsius = (5.0/9.0) * (farh - 32.0);
        printf("%3.0f %6.1f\n",farh,celsius);
        farh = farh + step;
    }
}