#include <stdio.h>

int main()
{
    int numArr[3][4] = {
        { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    };

    printf("%d\n", numArr[0][0]);
    printf("%d\n", numArr[1][2]);
    printf("%d\n", numArr[2][0]);
    printf("%d\n", numArr[2][3]);

    return 0;
}
/* Data_type Name_of_array[vertical size][horizontal size];
Data_type Name_of_array[vertical size][horizontal size] = {{value, value, value},{value, value, value}}; */