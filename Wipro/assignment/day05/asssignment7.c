#include <stdio.h>

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        if(i==n){
            for(int j=i-1;j>=1;j--){
                for(int k=j;k>=1;k--){
                    printf("*");
                }
                printf("\n");
            }
            
        }
    }
    printf("\n\n");
    return 0;
}