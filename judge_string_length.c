#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s1 = malloc(sizeof(char) * 30);
    
    scanf("%s", s1);
    printf("%s length is %d\n", s1, strlen(s1));
    
    free(s1);
    
    return 0;
}