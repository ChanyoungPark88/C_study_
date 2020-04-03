#include <stdio.h>

int main()
{
    char s1[20];

    sprintf(s1, "Hello, %s", "world!");     // sprintf(array, format, values)

    printf("%s\n", s1);

    return 0;
}