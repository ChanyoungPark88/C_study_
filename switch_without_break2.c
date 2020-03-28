#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    switch (num1)
    {
    case 1:
    case 2:
        printf("It is the 1 or 2\n");
        break;
    case 3:
    case 4:
        printf("It is the 3 or 4\n");
        break;
    default:
        printf("default\n");
    }
    
    return 0;
}