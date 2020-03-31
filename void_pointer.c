#include <stdio.h>

int main()
{
    int num1 = 10;
    char c1 = 'a';
    int *numPtr1 = &num1;
    char *cPtr1 = &c1;

    void *ptr;      // define void pointer
    // there is no compiler warning even if different pointer data type
    ptr = numPtr1;  // store int pointer into void pointer
    ptr = cPtr1;    // store char pointer into void pointer

    // there is no compiler warning even if different pointer data type
    numPtr1 = ptr;  // store void pointer into int pointer
    cPtr1 = ptr;    // store void pointer into char pointer

    return 0;
}