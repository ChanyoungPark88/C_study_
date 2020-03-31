#include <stdio.h>

int main()
{
    int *numPtr1;       // define single pointer
    int **numPtr2;      // define double pointer
    int num1 = 10;

    numPtr1 = &num1;
    numPtr2 = &numPtr1;     // store numPtr1's memory address

    printf("%d\n", **numPtr2);      // dereference the pointer twice to access the memory address of num1

    return 0;
}