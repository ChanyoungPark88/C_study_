#include <stdio.h>
#include <string.h>

int main()
{
    printf("%d\n", strcmp("aaa","aaa"));        //  0: aaa and aaa is same
    printf("%d\n", strcmp("aab","aaa"));        //  1: aab and aaa is not same. aab is bigger than aaa
    printf("%d\n", strcmp("aab","aac"));        // -1: aac and aab is not same. aac is bigger than aab

    return 0;
}