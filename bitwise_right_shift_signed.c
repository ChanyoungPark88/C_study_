#include <stdio.h>

int main()
{
    char num1 = 67;             // 67: 0100 0011
    char num2;

    num2 = num1 >> 5;           // move value of num1 bit to the right 5 times

    printf("%d\n", num2);       // 2: 0000 0010

    return 0; 
}