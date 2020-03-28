#include <stdio.h>

int main()
{
    unsigned char flag = 7;         //  7: 0000 0111

    flag ^= 2;          // 0000 0010 toggle 7th bit with mask and bit XOR
    flag ^= 8;          // 0000 1000 toggle 5th bit with mask and bit XOR

    printf("%u\n", flag);           // 13: 0000 1101

    if (flag & 1)                   // check 0000 0001 bit turned on with & operator
        printf("0000 0001 is turned on\n");
    else
        printf("0000 0001 is turned off\n");

    if (flag & 2)                   // check 0000 0010 bit turned on with & operator
        printf("0000 0010 is turned on\n");
    else
        printf("0000 0010 is turned off\n");

    if (flag & 4)                   // check 0000 0100 bit turned on with & operator
        printf("0000 0100 is turned on\n");
    else
        printf("0000 0100 is turned off\n");

    if (flag & 8)                   // check 0000 1000 bit turned on with & operator
        printf("0000 1000 is turned on\n");
    else
        printf("0000 1000 is turned off\n");

    return 0; 
}