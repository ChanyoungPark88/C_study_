#include <stdio.h>

int main()
{
    unsigned char num1 = 1;             // 0000 0001
    unsigned char num2 = 3;             // 0000 0011

    printf("%d\n", num1 & num2);        // 0000 0001: result is 01 with bit AND 01, 11
    printf("%d\n", num2 | num2);        // 0000 0011: result is 11 with bit OR 01,11
    printf("%d\n", num1 ^ num2);        // 0000 0010: result is 10 with bit XOR 01, 11

    return 0;
}