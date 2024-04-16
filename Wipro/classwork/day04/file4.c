//OPERATORS

#include <stdio.h>

int main()
{
    int i=18,j=23;
    //Equality operator
    printf("\n%d",(i==j));
    //less than operator
    printf("\n%d",(i<j));
    //less than or equal to operator
    printf("\n%d",(i<=j));
    //great than or equal to operator
    printf("\n%d",(i>=j));
    
    //logical operators
    printf("\n%d",(i>=j)&&((12>34)||(i<j)));

    return 0;
}