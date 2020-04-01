#include <stdio.h>

int main()
{
    int numArr[3][4] = {
        { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    };

    printf("%d\n", sizeof(numArr));

    int col = sizeof(numArr[0]) / sizeof(int);      // 2차원 배열의 가로 크기를 구할 때는 
                                                    // 가로 한 줄의 크기를 요소의 크기로 나눠줌
    int row = sizeof(numArr) / sizeof(numArr[0]);   // 2차원 배열의 세로 크기를 구할 때는 
                                                    // 배열이 차지하는 전체 공간을 가로 한 줄의 크기로 나눠줌
    printf("%d\n", col);
    printf("%d\n", row);

    return 0;
}