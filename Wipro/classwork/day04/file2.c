/*
Operators

works on numerical values
(+) works as addition 
(-) works as subtraction
(*) works as multiplication 
(/) works as division
(%) works as modulus

*/

#include <stdio.h>

int main(){
    int a = 5,b=2,t=0;
    float c=5.6;
    t = (int)c%b;
    printf("\n%d\n",t);
    
    printf("\n%d\n",a+b);
    printf("\n%d\n",a-b);
    printf("\n%d\n",a*b);
    printf("\n%d\n",a/b);
    printf("\n%d\n",a%b);

    return 0;
}