#include <stdio.h>
#include <stdlib.h>     // header file with srand, rand function
#include <time.h>       // header file with time function

int main()
{
    srand(time(NULL));      // set seed to current time

    int i = 0;
    while (i != 3)          // repeat when value of i is not 3
    {
        i = rand() % 10;    // create random numbers less than 10 with rand function
        printf("%d\n", i);
    }
    
    return 0;
}