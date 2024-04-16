/*
classify a person is eligilbe to vote or not and under which category it belong
eligible to vote>18
65 above is senior
above 18 is adult
below 18 is minor
*/
#include <stdio.h>

int main(){
    int a ;
    scanf("%d",&a);
    if(a<=18){
        printf("not eligible, minor");
    }else if (a>18){
        if(a<=65){
            printf("eligible to vote,adult");
        }else if (a>65){
            printf("eligible to vote,senior");
        }
    }
    return 0;
}