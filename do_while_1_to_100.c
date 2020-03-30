#include <stdio.h>

int main()
{
    int i = 1;

    do                      // code below is executed first one time.
    {
        printf("Hello, world! %d\n", i);            // print "Hello, World!" and the value of i
        i++;                                        // increase i by one
    } while (i <= 100);         // repeat when i is less than or equal to 100. Repeat 100 times, increasing from 1 to 100
    
    return 0;
}