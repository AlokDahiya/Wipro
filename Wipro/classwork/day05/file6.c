/*
SWITCH and GOTO
*/
#include <stdio.h>

int main(){
ee:
    int a;
    printf("\nenter a valueee between 0-3: ");
    scanf("%d",&a);
    switch (a)
    {
    case 0:
        printf("\n0 is entered");
        break;
    case 1:
        printf("\n1 is entered");
        break;
    case 2:
        printf("\n2 is entered");
        break;
    case 3:
        printf("\n3 is entered");
        break;
    default:
        printf("\n value not between 0-3");
        printf("\n");
        goto ee;
        break;
    }
    return 0;
}