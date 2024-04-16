//INSERTION SORT

#include <stdio.h>
//defining n as permanent 5 value
#define n 5

void dispList(int [], int);
int main()
{
    int a[n] = {7,5,4,2,6};
    int i,j,p;
    dispList(a,n);
    //logic
    i = 1;
    while(i < n)
    {
        p = a[i];
        j = i-1;
        while (j >= 0 && a[j] > p)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j+1]=p;
        i = i+1;
    }

    printf("\nAfter Sorting List of Elements\n");
    dispList(a,n);


    return 0;
}

//created another function for displaying array
void dispList(int a[], int Cap)
{
    int i;
    printf("\nList is\n");
    printf("\n=======================\n");
    for(i=0;i<Cap;i++)
        printf("%d\t",a[i]);
    printf("\n=======================\n");
}