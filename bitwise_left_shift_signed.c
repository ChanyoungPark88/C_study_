#include <stdio.h>

int main()
{
    char  num1 = 113;           // 113: 0111 0001
    char  num2 = -15;           // -15: 1111 0001
    char num3, num4, num5, num6;

    num3 = num1 << 2;           // move value of num1 bit to the left 2 times
    num4 = num2 << 2;           // move value of num2 bit to the left 2 times

    num5 = num1 << 4;           // move value of num1 bit to the left 4 times
    num6 = num2 << 4;           // move value of num2 bit to the left 4 times

    printf("%d\n", num3);       // -60: 1100 0100
    printf("%d\n", num4);       // -60: 1100 0100

    printf("%d\n", num5);       // 16: 0001 0000
    printf("%d\n", num6);       // 16: 0001 0000

    return 0;
}