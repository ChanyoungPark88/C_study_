// 20200402 2:10 Start!
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;       // 행 row(가로), 열 col(세로)을 선언

    scanf("%d %d", &row, &col);     // 행 row와 열 col에 각각 값을 입력받는다.

    char **matrix = malloc(sizeof(char *) * row);   // 이중 포인터에 (char 포인터 크기 * 세로 크기) 만큼 메모리 할당. 배열의 세로

    for (int i = 0; i < row; i++)       // 세로 크기만큼 반복
    {
        matrix[i] = malloc(sizeof(char) * (col + 1));     // (char의 크기 * 가로 크기) 만큼 동적 메모리 할당. 배열의 가로
    }                                                     // 행렬의 가로 공간에는 문자열이 들어가므로 메모리 할당 시 가로크기 + 1

    // 여기까지 하면 5 x 5 배열이 출력이 됨(포인터 자료형을 int로 바꿔서 확인함) - 배열의 동적 할당은 성공




    for (int i = 0; i < row; i++)           // 문자열을 여러 줄 입력 받기
    {
        scanf("%s", matrix[i]);
    }
    
    // 현재 막히는 부분 - 입력받은 문자열을 할당받은 배열에 저장 segmentation error 발생 아마도 자료형이 달라서 문제가 발생하는듯..
    // 입력받은 문자열이 *인 경우 그대로 출력하고 .일경우 0으로 초기화
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {   
            if (matrix[i] != "*")
                matrix[i] = 0;
            else
                matrix[i] = "*";
            
            printf("%s ", matrix[i][j]);
        }
        printf("\n");
    }
    free(matrix);

    return 0;
} 
/* 
$   .   .   .   .                   $   2   2   2   2

.   $   .   $   $                   3   $   3   $   $

.   $   .   .   .                   2   $   3   2   2

.   .   .   .   .                   1   1   1   0   0

.   .   .   .   .                   0   0   0   0   0 */