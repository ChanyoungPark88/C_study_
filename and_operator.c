//20200327 06:30

#include <stdio.h>

int main()
{
    printf("%d\n", 1&&1);
    printf("%d\n", 1&&0);
    printf("%d\n", 0&&1);
    printf("%d\n", 0&&0);

    printf("%d\n", 2&&3);

    return 0;
}
/* important: operator && is true if both values ​​are true. */