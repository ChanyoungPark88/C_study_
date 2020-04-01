#include <stdio.h>

int main()
{
    int numArr[3][4] = {
        { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    };

    int col = sizeof(numArr[0]) / sizeof(int);

    int row = sizeof(numArr) / sizeof(numArr[0]);

    for (int i = 0; i < row; i++)           // Repeat by the vertical size of the two-dimensional array.
    {
        for (int j = 0; j < col; j++)       // Repeat by the horizontal size of the two-dimensional array
        {
            printf("%d ", numArr[i][j]);    // 
        }
        printf("\n");
    }
    
    return 0;
}

// 20200401 1:41 pause