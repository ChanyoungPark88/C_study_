#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rowcol;
    
    scanf("%d", &rowcol);
    
    int **m = malloc(sizeof(int *) * rowcol);
    
    for (int i = 0; i < rowcol; i++)
    {
        m[i] = malloc(sizeof(int) * rowcol);
    }
    
    for (int i = 0; i < rowcol; i++)
    {
        for (int j = 0; j < rowcol; j++)
        {
            m[i][j] = i;
        }
    }
    
    for (int i = 0; i < rowcol; i++)
    {
        for (int j = 0; j < rowcol; j++)
        {
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < rowcol; i++)
    {
        free(m[i]);
    }
    
    free(m);
    
    return 0;
}