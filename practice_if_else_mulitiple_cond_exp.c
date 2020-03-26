#include <stdio.h>

int main()
{
    int writtenTest = 78;
    int toeic = 870;

    if (writtenTest >= 80 && toeic >= 850)
        printf("Pass\n");
    else
        printf("Fail\n");
        
    return 0;
}