/*
alphabetic pyramid

*/
#include <stdio.h>

int main(){
    char ch=65;
    int r;
    printf("enter a number: ");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%c",ch++);
        }
        ch-=2;
        if(i<=r){
            for(int k =i-1;k>=1;k--){
                printf("%c",ch--);
            }
        }
        ch=65;
        printf("\n");
    }
    printf("\n\n");
    return 0;
}