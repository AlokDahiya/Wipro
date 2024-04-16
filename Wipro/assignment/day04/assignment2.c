/*
table from users input
*/

#include <stdio.h>

int main(){
    int  n;
    printf("enter the number: ");
    scanf("%d",&n);
    int i=1;
    while(i<=10){
        printf("\n%d x %d = %d",n,i,n*i);
        i++;
    }
    printf("\n-----------------\n");
    return 0;
}