#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10];
    char s2[10];

    printf("input two strings: ");
    scanf("%s %s", s1, s2);

    int ret = strcmp(s1, s2);

    switch (ret)
    {
    case 0:
        printf("both strings are same\n");
        break;
    case 1:
        printf("%s is bigger than %s\n", s1, s2);
        break;
    case -1:
        printf("%s is bigger than %s\n", s2, s1);
    default:
        break;
    }

    return 0;
}