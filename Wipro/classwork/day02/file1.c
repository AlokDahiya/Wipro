//BUBBLE SORT

#include <stdio.h>
#define n 5

int a[5] = {3,4,7,2,5};
void print(int a[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d  ", a[i]);
  }
}

void main() {
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                //swapping
                int p = a[j];
                a[j] = a[j+1];
                a[j+1] = p;
            }
        }
    }
    print(a,5);
}