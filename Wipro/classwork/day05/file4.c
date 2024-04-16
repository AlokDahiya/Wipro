/*
return biggest no using if else 
*/
#include <stdio.h>

int main(){
    int a =10 ,b = 7 ,c = 12;
    if(a<b){
        if(b<c){
            return c;
        }else{
            return b;
        }
    }else{
        if(a<c){
            return c;
        }else{
            return a;
        }
    }
}