//FIBONACCI SERIES

#include <stdio.h>

void main(){
    int p1=0,i=0,n,t,p2=1;
    printf("\nEnter the nth Number: ");
    scanf("%d",&n);
    printf("\nFib Series of %dth Number is\n",n);
    printf("%d ",p2);
    while(i<n)
    {
        t = p1+p2;
        p1 = p2;
        p2 = t;
        printf("%d ",t);
        i++;
    }
}