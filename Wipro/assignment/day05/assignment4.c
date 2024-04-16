/*
sum of series 3 33 333 3333 33333 333333
*/

#include <stdio.h>

int main(){
    int i=0,t=0,j=6;
    int sum=0,sum2=0;
    int k=1;
    while(t<j){
        while(i<=t){
            sum+=3*k;
            k*=10;
            i++;
        }
        sum2+=sum;
        t++;
    }
    
    printf("%d",sum2);
    return 0;
}