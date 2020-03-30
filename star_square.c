#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)         // repeat 5 times. outer loop is vertical
    {
        for (int j = 0; j < 5; j++)             //repeat 5 times. inner loop is horizontal
        {
            printf("*");            // print stars
        }
        printf("\n");               // prints all stars in the horizontal direction and then moves to the next line
    }
    
    return 0;
}