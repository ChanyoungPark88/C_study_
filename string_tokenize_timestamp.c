#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "2020-04-04T12:42:19";

    char *ptr = strtok(s1, "-T:");

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, "-T:");
    }
    
    return 0;
}