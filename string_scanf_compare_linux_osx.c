#include <stdio.h>
#include <string.h>

int main()
{
    char  s1[10];
    char  s2[10];

    printf("input two strings: ");
    scanf("%s %s", s1, s2);

    int ret = strcmp(s1, s2);
    printf("Return code: %d\n", ret);

    if (ret == 0)
    {
        printf("both strings are same");
    }
    else if (ret > 0)
    {
        printf("%s is bigger than %s", s1, s2);
    }
    else if (ret < 0)
    {
        printf("%s is bigger than %s", s2, s1);
    }
    
    return 0;
}