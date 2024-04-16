/*
MODIFIERS
-signed char (range of values(0 to 255))
-unsigned char (range of values(-128 to 127))
-unsigned int (range of values(0 to 65535))
-signed int (range of values (-31768 to 32767))
-short int (range of values (-31768 to 32767))
*/

#include <stdio.h>

int main()
{
    /*
    size in bytes
    */
    printf("\nSize of char = %d\n",sizeof(char));
    printf("\nSize of char = %d\n",sizeof(char));
	printf("\nSize of int = %d\n",sizeof(int));
    printf("\nSize of short int = %d\n",sizeof(short int));
    printf("\nSize of long int = %d\n",sizeof(long int));
    printf("\nSize of long double = %d\n",sizeof(long double));
	return 0;
}
