#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    if (num1 == 1)          // if num1 is 1
        goto ONE;           // Immedietly go to Label ONE
    else if (num1 == 2)     // if num1 is 2
        goto TWO;           // Immedietly go to Label TWO
    else                    // if nothing
        goto EXIT;          // Immedietly go to Label EXIT
    
ONE:        // Label ONE
    printf("It is 1.\n");
    goto EXIT;      // Immedietly go to Label EXIT
TWO:        // Label TWO
    printf("It is 2.\n");
    goto EXIT;      // Immedietly go to Label EXIT
EXIT:       // Label EXIT
    return 0;
}