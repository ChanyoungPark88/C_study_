#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s1 = malloc(sizeof(char ) *30);
    char *s2 = malloc(sizeof(char ) *30);
    
    scanf("%s %s", s1, s2);
    int ret = strcmp(s1, s2);
    
    if(ret == 0)
        printf("%d", ret);
    else if(ret > 0)
        printf("%d", ret);
    else if(ret < 0)
        printf("%d", ret);
        
    free(s1);
    free(s2);
    
    return 0;
}