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
    while(i<=n) // outer loop
    {   
        int j=1;
        while(j<=i){
            printf("*");
            j++;
        } 
        printf("\n");
        i++;
    }
    printf("\nProgram end\n");
    return 0;
}