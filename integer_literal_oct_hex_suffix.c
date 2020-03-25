#include <stdio.h>

int main()
{
    printf("0%lo\n", 017L);                 // octal integer literal of size of long 
    printf("0%lo\n", 017UL);                // octal integer literal of size of unsigned long
    printf("0x%1X\n", 0x7FFFFFL);           // hexadecimal integer literal of size of long
    printf("0x%1x\n", 0xFFFFFFFFUL);        // hexadecimal integer literal of size of unsigned long

    return 0;
}