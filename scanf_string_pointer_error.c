#include <stdio.h>

int main()
{
    char *s1 = "Hello";     // declares a string pointer and assigns strings

    printf("input strings: ");
    scanf("%s", s1);        // execute error

    printf("%s\n", s1);

    return 0;
}