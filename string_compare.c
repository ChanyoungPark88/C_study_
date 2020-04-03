#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10] = "Hello";
    char *s2 = "Hello";

    int ret = strcmp(s1, s2);       // compare two strings are same or not

    printf("%d\n", ret);        // if strings are same print 0

    return 0;
}