#include <stdio.h>

int main()
{
    int count;
    
    scanf("%d", &count);        // get the value

    int i = 1;
    while (1)                   // infinite loop
    {
        printf("%d\n", i);

        if (i == count)         // When i equals the value entered 
            break;              // break the loop

        i++;        
    }

    return 0;
}