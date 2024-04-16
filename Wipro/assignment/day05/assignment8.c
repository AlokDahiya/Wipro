#include <stdio.h>

int main(){
    int i=1;
    while(i<=25){
        if(i%5==0){
            printf("%d",i);
            printf("\n");
        }else{
            printf("%d*",i);
        }
        i++;
    }
}