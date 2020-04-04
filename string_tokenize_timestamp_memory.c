#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s1 = malloc(sizeof(char )* 50);

    strcpy(s1, "2020-04-04T12:45:50");

    char *ptr = strtok(s1 ,"-T:");

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, "-T:");
    }
    free(s1);

    return 0;
}