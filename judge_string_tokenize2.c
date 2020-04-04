#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int count = 0;
    int ret;
    char *s1 = malloc(sizeof(char )* 1001);     // 길이 1000이하의 메모리 선언

    scanf("%[^\n]s", s1);

    char *ptr = strtok(s1, " .,");             // "the "를 기준으로 문자열을 자름: them, their등이 카운트되는걸 막기 위함
   
    ret = strcmp(ptr,"the");

    if (ret == 0)
    {
        ++count;
    }
    
    while (ptr != NULL)
    {
        
        if (ret == 0)
        {
            ++count;
        }
        ptr = strtok(NULL, "the");             // 다음 문자열을 잘라서 포인터 반환
    }
    
    free(s1);

    return 0;
}