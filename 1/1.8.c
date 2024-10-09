#include <stdio.h>

int main(void)
{
int nc,nt,c,space;
nc = 0, nt = 0, space = 0;
while((c = getchar()) != EOF){
if(c == '\n' ){
            nc++;
        }
        if(c == '\t'){
            nt++;
        }
        if(c == ' ')
        {
            space++;
        }
    }

printf("str = %d\n, tab = %d\n space = %d\n",nc,nt,space);
    return 0;
}