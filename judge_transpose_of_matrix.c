#include <stdio.h>

int main()
{
    int matrix[5][5];

    scanf("%d %d %d %d %d", 
        &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3], &matrix[0][4]);
    scanf("%d %d %d %d %d", 
        &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3], &matrix[1][4]);
    scanf("%d %d %d %d %d", 
        &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3], &matrix[2][4]);
    scanf("%d %d %d %d %d", 
        &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3], &matrix[3][4]);
    scanf("%d %d %d %d %d", 
        &matrix[4][0], &matrix[4][1], &matrix[4][2], &matrix[4][3], &matrix[4][4]);

    int col = sizeof(matrix[0]) / sizeof(int);
    int row = sizeof(matrix) / sizeof(matrix[0]);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
/* 
matrix[0][0]    matrix[0][1]	matrix[0][2]	matrix[0][3]	matrix[0][4]		matrix[0][0]	matrix[1][0]	matrix[2][0]	matrix[3][0]	matrix[4][0]


matrix[1][0]	matrix[1][1]	matrix[1][2]	matrix[1][3]	matrix[1][4]		matrix[0][1]	matrix[1][1]	matrix[2][1]	matrix[3][1]	matrix[4][1]


matrix[2][0]	matrix[2][1]	matrix[2][2]	matrix[2][3]	matrix[2][4]	=> 	matrix[0][2]	matrix[1][2]	matrix[2][2]	matrix[3][2]	matrix[4][2]


matrix[3][0]	matrix[3][1]	matrix[3][2]	matrix[3][3]	matrix[3][4]		matrix[0][3]	matrix[1][3]	matrix[2][3]	matrix[3][3]	matrix[4][3]


matrix[4][0]	matrix[4][1]	matrix[4][2]	matrix[4][3]	matrix[4][4]		matrix[0][4]	matrix[1][4]	matrix[2][4]	matrix[3][4]	matrix[4][4]


1	2	3	4	5				1	6	11	16	21

6	7	8	9	10				2	7	12	17	22

11	12	13	14	15		=>		3	8	13	18	23

16	17	18	19	20				4	9	14	19	24

21	22	23	24	25				5	10	15	20	25 */