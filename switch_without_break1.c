#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    switch (num1)
    {
    case 1:
        printf("It is the 1.\n");
    case 2:
        printf("It is the 2.\n");    
    default:
        printf("default\n");
    }

    return 0;
}