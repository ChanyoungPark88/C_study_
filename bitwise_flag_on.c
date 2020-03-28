#include <stdio.h>

int main()
{
    unsigned char flag = 0;

    flag |= 1;              // 0000 0001 turn on 8th bit with mask and bit OR
    flag |= 2;              // 0000 0010 turn on 7th bit with mask and bit OR
    flag |= 4;              // 0000 0100 turn on 6th bit with mask and bit OR

    printf("%u\n", flag);           // 7: 0000 0111

    if (flag & 1)           // check 0000 0001 bit turned on with & operator
        printf("0000 0001 is turned on\n");
    else
        printf("0000 0001 is turned off\n");

    if (flag & 2)           // check 0000 0010 bit turned on with & operator
        printf("0000 0010 is turned on\n");
    else
        printf("0000 0010 is turned off\n");

    if (flag & 4)           // check 0000 0100 bit turned on with & operator
        printf("0000 0100 is turned on\n");
    else
        printf("0000 0100 is turned off\n");

    return 0;
}