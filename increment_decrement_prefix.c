#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    num3 = ++num1;      //assigning the value to num3 after increase the value of num1 by 1 
    num4 = --num2;      //assigning the value to num4 after decrease the value of num2 by 1

    printf("%d %d\n", num3, num4);

    return 0;
}
/* num3 = ++num1;
    same as
    num1 = num1+1;
    num3 = num1;

    num4 = --num2;
    same as
    num2 = num2-1;
    num4 = num2; */