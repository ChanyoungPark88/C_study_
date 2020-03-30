#include <stdio.h>

int main()
{
    int num1 = 0;

    for(;;)         // loop infinite
    {
        num1++;     // increase num1 by 1

        printf("%d\n", num1);

        if (num1 == 100)        // if num1 is 100
            break;              // break the loop. out of while
    }
    
    return 0;
}