//20200401 12:35
#include <stdio.h>

int main()
{
    int decimal = 13;
    int binary[20] = { 0, };

    int position = 0;

    while(1)
    {
        binary[position] = decimal % 2;         // divided by 2 and the rest that store to array
        decimal = decimal / 2;                  // store value that divided by 2

        position++;     // Change the number of digits

        if (decimal == 0)
            break;        
    }

    // Output elements in array in reverse order
    for (int i = position - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    
    printf("\n");

    return 0;
}