#include <stdio.h>

int main()
{
    unsigned char num1 = 240;           // 240: 1111 0000
    unsigned char num2 = 15;            //  15: 0000 1111

    unsigned char num3, num4;

    num3 = num1 << 2;                   // move num1 bit to the left 2 times
    num4 = num2 >> 2;                   // move num2 bit to the right 2 times

    printf("%u\n", num3);               // 192: 1100 0000: leading 2 bits disappear
    printf("%u\n", num4);               //   3: 0000 0011: the last 2 bits disappear

    return 0;
}