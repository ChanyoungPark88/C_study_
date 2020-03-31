#include <stdio.h>
#include <stdlib.h>     // header file with malloc, free

int main()
{
    int num1 = 20;      // define int variable
    int *numPtr1;       // define int pointer

    numPtr1 = &num1;        // store num1's memory address into numPtr

    int *numPtr2;       // define int pointer

    numPtr2 = malloc(sizeof(int));      // dynamic memory allocation by 4 bytes of int size

    printf("%p\n", numPtr1);

    printf("%p\n", numPtr2);

    free(numPtr2);      // free dynamically allocated memory

    return 0;
}