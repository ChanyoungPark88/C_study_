#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("%d\n", true&&true);         // true AND true is 1
    printf("%d\n", true&&false);        // true AND false is 0
    printf("%d\n", false&&false);       // false AND true is 0
    printf("%d\n", false&&false);       // false AND false is 0

    printf("%d\n", true||true);         // true OR true is 1
    printf("%d\n", true||false);        // true OR false is 1
    printf("%d\n", false||true);        // false OR true is 1
    printf("%d\n", false||false);       // false OR false is 0

    return 0;
}