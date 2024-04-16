/*
star pattern
*/
#include <stdio.h>

int main()
{
    int n;
ff:
    printf("\nenter a value in range 1-10: ");
    scanf("%d",&n);
    if(n<2 && n>10){
        goto ff;
    }
    int i=1;
    while(i<=n) 
    {   
        int t=1;
        while(t<=n){
            printf("*");
            t++;
        } 
        printf("\n");
        i++;
    }
    printf("\nProgram end\n");
    return 0;
}