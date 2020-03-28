#include <stdio.h>

int main()
{
    unsigned char num1 = 4;             // 4: 0000 0100
    unsigned char num2 = 4;             // 4: 0000 0100
    unsigned char num3 = 4;             // 4: 0000 0100
    unsigned char num4 = 4;             // 4: 0000 0100
    unsigned char num5 = 4;             // 4: 0000 0100

    num1 &= 5;                          // allocation after calculate AND operator with 5(0000 0101)
    num2 |= 2;                          // allocation after calculate OR operator with 2(0000 0010)
    num3 ^= 3;                          // allocation after calculate XOR operator with 3(0000 0011)
    num4 <<=2;                          // allocation bit data after move left 2 times
    num5 >>=2;                          // allocation bit data after move right 2 times

    printf("%u\n", num1);               //  4: 0000 0100: 100. with bit AND operator 100 and 101
    printf("%u\n", num2);               //  6: 0000 0110: 110. with bit OR operator 100 and 010
    printf("%u\n", num3);               //  7: 0000 0111: 111. with bit XOR operator 100 and 011
    printf("%u\n", num4);               // 16: 0001 0000: 10000. move 10 2 times to the left
    printf("%u\n", num5);               //  1: 0000 0001: 1. move 100 2 times to the right

    return 0;
}