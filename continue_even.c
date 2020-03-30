#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);

    for (int i = 1; i <= count; i++)                // Repeat from 1 to until less than or equal to count
    {
        if (i % 2 != 0)                 // if the remainder is non-zero when divided i with 2, and odd
            continue;                   // Skip without running the code below

        printf("%d\n", i);
    }
    
    return 0;
}
// 20200330 5:35