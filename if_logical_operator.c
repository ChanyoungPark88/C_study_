#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 0;

    if(num1&&num2)      // check it both of true
        printf("True\n");
    else
        printf("False\n");    // result is False because just num1 is true
    
    if(num1||num2)      // check true num1 or num2
        printf("True\n");       // result is true because num1 is true
    else
        printf("False\n");

    if(!num1)           // reverse num1
        printf("True\n");
    else
        printf("False\n");      //result is False because reversed num1
    
    return 0;

}