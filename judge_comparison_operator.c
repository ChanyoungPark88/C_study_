#include <stdio.h>

int main()
{
    char c1;
    
    scanf("%c", &c1);
    
    if (c1 != 'k')
        printf("True\n");
    else
        printf("False\n");

    if (c1 > 'h')
        printf("True\n");
    else
        printf("False\n");

    if (c1 <= 'o')
        printf("True\n");
    else
        printf("False\n");
          
    return 0;
}