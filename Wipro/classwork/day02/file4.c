//FIBONACCI SERIES USING RECURSION

#include <stdio.h>

//created another function for easy understanding
void rec(int p1,int p2,int n)
{
    if (n==0){
        return;
    }
    int j = p1+p2;
    printf("%d ",j);
    p1 = p2;
    p2 = j;
    //using function in function
    rec(p1,p2,n-1);
}

void main(){
    int p1=0,n,p2=1;
    printf("\nEnter the nth Number: ");
    scanf("%d",&n);
    printf("\nFib Series of %dth Number is\n",n);
    printf("%d ",p2);
    rec(p1,p2,n);
}