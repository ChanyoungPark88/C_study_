//20200330 4:30

#include <stdio.h>

int main()
{
    int i = 0;

    do                  // code below is executed first one time.
    {
        printf("Hello, World! %d\n", i);            // print "Hello, World!" and the value of i
        i++;                                        // increase i by one
    } while (i < 100);              // Repeat when i is less than 100. Repeat 100 times, increasing from 0 to 99
    
    return 0;
}

/* Same code as above with while
#include <stdio.h>

int main()
{
    int i = 0;

    // The part corresponding to do
    printf("Hello, world! %d\n", i);        // executed first one time
    i++;                                    // executed first one time

    while (i < 100)
    {
        printf("Hello, world! %d\n", i);            // print "Hello, World!" and the value of i
        i++;                                        // increase i by one
    }
    
    return 0;
} */