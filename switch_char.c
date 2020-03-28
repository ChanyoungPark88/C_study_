#include <stdio.h>

int main()
{
    char c1;

    scanf("%c", &c1);

    switch (c1)
    {
    case 'a':
        printf("It is the a.\n");
        break;
    case 'b':
        printf("It is the b.\n");
        break;
    default:
        printf("default\n");
        break;
    }

    return 0;
}