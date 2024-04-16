/*
operator before assigned value gives value after operation and saves it 

operator after assigned value gives value without operation and
do operation afterwards and saves it
*/
#include <stdio.h>

int main()
{
    int a = 3,b;
    a = --b;
    printf("\na=%d b=%d\n",a++,b--);
    printf("\na=%d b=%d\n",++a,--b);
    printf("\na=%d b=%d\n",a,b);
    
    return 0;
}
