#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ( j == i)        // if same vertical variable "i" and horizontal variable "j"
                printf("*");    // print stars
            else                // if different vertical variable "i" and horizontal variable "j"
                printf(" ");    // print space
        }
        printf("\n");
    }
    return 0;
}