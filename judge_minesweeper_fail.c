// 20200402 2:10 Start!
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {   
            /* 행렬이 준비되면 m, n만큼 반복하면서 요소가 *이면 continue로 건너뛰고 *이 아니면 문자 '0'을 넣습니다
            (continue는 '30.2 continue로 코드 실행 건너뛰기' 참조). */ 
            if (matrix[i][j] == '*')
            {
                printf(" * ");
                continue;
            } 
            else
            {
                matrix[i][j] = 0;
                printf(" %d ", matrix[i][j]); // 출력하지는 않지만 값은 0으로 초기화 되어있음
            }
            /* 이제 이 요소 matrix[i][j]의 주변 8개를 탐색하여 *이면 요소의 개수를 1씩 증가시키면 됩니다. */
            
            
            
            
            printf(" %c ", matrix[i][j]);

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
/* 
matrix[i][j] 이 확인해야 하는 요소:  matrix[i-1][j-1], matrix[i-1][j], matrix[i-1][j+1], 
                                    matrix[i][j-1], matrix[i][j+1], 
                                    matrix[i+1][j-1], matrix[i+1][j], matrix[i+1][j+1]  */