/* How to define pointer
data type *pointer name;
pointer = &variable; */

#include <stdio.h>

int main()
{
    int *numPtr;        // define pointer variable
    int num1 = 10;      // store 10 into int variable

    numPtr = &num1;     // store memory address of num1 into pointer variable

    printf("%p\n", numPtr);     // print pointer variable value of numPtr
                                // It prints different values ​​for each computer and every time it runs.
    printf("%p\n", &num1);      // print memory address of numPtr
                                // It prints different values ​​for each computer and every time it runs.
    return 0;
}