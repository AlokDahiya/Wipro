/*
prebuild functions
*/

#include <stdio.h>

int main(){
    /*
    printf return int 
    */
    int printf(control string,vargs);
    int p;
    p = printf("anuone");

    /*
    scanf also return int 
    */
    int scanf(control string,address of vargs);
    int a,b;
    /*
    name should contain 14 char , 1 is for null value
    */
    char Name[15];

    /*
    giving first value as &name[0]
    */
    scanf("%d%d%s",&a,&b,&Name[0]);

    /*
    this is sufficient
    */
    scanf("%d%d%s",&a,&b,Name);

    /*
    for single character
    */
    char ch;
    scanf("%c",&ch);

    return 0;
}