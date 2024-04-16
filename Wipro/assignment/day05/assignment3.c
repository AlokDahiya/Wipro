/*
sum of even and sum of odd between 1 to 59
*/
#include <stdio.h>

int main(){
    int sumofeven=0,sumofodd=0;
    int i =2;
    while(i<50){
        if(i%2==0){
            sumofeven+=i;
        }else{
            sumofodd+=i;
        }
        i++;
    }
    printf("\nsum of even: %d\n",sumofeven);
    printf("\nsum of odd: %d\n",sumofodd);
    return 0;
}