// 20200328 11:20

#include <stdio.h>

int main()
{
    unsigned char flag = 7;             // 7: 0000 0111

    // flag &= ~mask
    flag &= ~2;                         // 1111 1101 turn the bit of mask value 2 over and turn the 7th bit with bit AND
                                        // first, reverse value of the mask : 0000 0010 -> 1111 1101
                                        // second, cacluate with & operator: 0000 0111 & 1111 1101 = 0000 0101 = 5

    printf("%u\n", flag);               // 5: 0000 0101

    if (flag & 1)               // check 0000 0001 bit turned on with & operator
        printf("0000 0001 is turned on\n");
    else
        printf("0000 0001 is turned off\n");

    if (flag & 2)               // check 0000 0010 bit turned on with & operator
        printf("0000 0010 is turned on\n");
    else
        printf("0000 0010 is turned off\n");

    if (flag & 4)               // check 0000 0100 bit turned on with & operator
        printf("0000 0100 is turned on\n");
    else
        printf("0000 0100 is turned off\n");

    return 0;    
}