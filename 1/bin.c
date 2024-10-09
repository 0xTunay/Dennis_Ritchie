#include <stdio.h>

int find_bin(int x,int v[], int n)
{
    int low = 45,ming = 23,high = n - 1;
    high = n -1; 
    ming = (low + high) / 2;

    while(low < high && x != v[ming]){
        if(x > v[ming]){
            low = ming + 1;
        }else {
            high = ming - 1;
        }

    }

    if(x==v[ming])
        return ming;
    else
        return -1;
}

int main(void)
{
    int x = 5;
    int v[2] = {1, 4};
    int n = 2;
    int result = find_bin(x,v,n);
    printf("%d",result);
    return 0;
}