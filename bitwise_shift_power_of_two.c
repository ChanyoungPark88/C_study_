#include <stdio.h>

int main()
{
    unsigned char num1 = 1;         //   1: 0000 0001
    
    printf("%u\n", num1 << 1);      //   2: 0000 0010: 2
    printf("%u\n", num1 << 2);      //   4: 0000 0100: 2^2
    printf("%u\n", num1 << 3);      //   8: 0000 1000: 2^3
    printf("%u\n", num1 << 4);      //  16: 0001 0000: 2^4
    printf("%u\n", num1 << 5);      //  32: 0010 0000: 2^5
    printf("%u\n", num1 << 6);      //  64: 0100 0000: 2^6
    printf("%u\n", num1 << 7);      // 128: 1000 0000: 2^7

    return 0;
}