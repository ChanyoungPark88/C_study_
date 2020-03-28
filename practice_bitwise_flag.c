#include <stdio.h>

int main()
{
    unsigned char flag1 = 1 << 7;       // 0000 0001 -> 1000 0000 : 128
    unsigned char flag2 = 1 << 3;       // 0000 0001 -> 0000 1000 : 8

    flag1 |= 1 << 2;                    // 1000 0100: 132
    flag1 &= ~( 1 << 7);                // 0000 0100: 4
    flag2 ^= 1 << 3;

    printf("%u %u\n", flag1, flag2);

    return 0;
}