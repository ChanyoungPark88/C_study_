#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int sum = 0;
    char *s1 = malloc(sizeof(char )* 1001);    // NULL문자를 포함한 동적할당
    
    scanf("%[^\n]s", s1);                       // 공백을 포함한 문자열 입력받기

    char *ptr = strstr(s1, " ");

    while (ptr != NULL)
    {
        ptr = strstr(ptr + 1, " ");
        ++sum;
    }
    printf("%d\n", sum);

    free(s1);

    return 0;
}
// 20200403 6:40 end