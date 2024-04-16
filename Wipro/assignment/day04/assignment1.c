#include <stdio.h>

int main(){
    int empId,sal;
    char name[30],gender,phno[12],address[100];
    printf("enter employee details:\n");
    printf("ID: ");
    scanf("%d",&empId);
    printf("\nname: ");
    scanf("%s29",&name);
    printf("\ngender: ");
    scanf("%c",&gender);
    printf("\nsalary: ");
    scanf("%d",&sal);
    printf("\nphone no: ");
    scanf("%c[12]",&phno);
}