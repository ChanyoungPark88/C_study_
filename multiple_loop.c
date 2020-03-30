#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)     // repeat 5 times. outer loop is vertical
    {
        for (int j = 0; j < 5; j++)     // repeat 5 times. inner loop is horizontal
        {
            printf("j:%d ", j);         // print j
        }
        
        printf("i:%d\\n", i);           // print i, Print newline text
        printf("\n");               // prints all numbers in the horizontal direction and then moves to the next line
    }
    
}