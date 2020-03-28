#include <stdio.h>

int main()
{
    int num1 = 20;
    int num2 = 10;
    int num3 = 30;
    int num4 = 15;

    printf("%d\n", num1>num2 && num3>num4);
    printf("%d\n", num1>num2 && num3<num4);

    printf("%d\n", num1>num2 || num3<num4);
    printf("%d\n", num1<num2 || num3<num4);

    printf("%d\n", !(num1>num2));

    return 0;
}

/* 
Important:
&& operator judge the False without check the 2nd value if the 1st value is False.
|| operator judge the True without check 2nd value if the 1st value is True. 
*/