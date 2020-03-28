#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 0;

    if(num1&&num1)
        printf("True\n");
    else
        printf("False\n");    
    
    if(num1||num2)
        printf("True\n");
    else
        printf("False\n");

    printf("%s\n", !num2 ? "True" : "False");

    return 0;
}