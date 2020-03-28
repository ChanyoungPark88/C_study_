#include <stdio.h>

int main()
{
    char memu;

    scanf("%c", &memu);

    switch (memu)
    {
    case 'f':
        printf("Fanta\n");
        break;
    case 'c':
        printf("Cola\n");
        break;
    case 'p':
        printf("Pocari Sweat\n");
        break;
    default:
        printf("Non sale\n");
        break;
    }

    return 0;
}