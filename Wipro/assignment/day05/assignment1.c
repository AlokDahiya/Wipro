/*
print series 0 3 8 15 24 35 48 63 80 99
*/
#include <stdio.h>

int main()
{
    int i=0,j=2,n=0;
    
    while(n<10)
    {   
        printf("%d ",i*j);
        i++;
        j++;
        n++;
    }
    printf("\nProgram end\n");
    return 0;
}