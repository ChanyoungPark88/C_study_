#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 100)            // Repeat when i is less than or equal to 100. Repeat 100 times, increasing from 1 to 100
    {
        i++;                    // increase i by 1
        if (i % 2 != 0)         // if the remainder is non-zero when divided i with 2, and odd
            continue;           // Skip without running the code below
        
        printf("%d\n", i);
    }
    
    return 0;
}