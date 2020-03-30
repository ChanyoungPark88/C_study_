#include <stdio.h>

int main()
{
    for (int i = 0; i <= 100; i++)          // repeat 100 times while increase from 1 to 100
    {
        if (i % 2 != 0)                 // if i divided by 2, the remainder is non-zero and odd
            continue;                   // skip without running the code below

        printf("%d\n", i);
    }
    
    return 0;
}