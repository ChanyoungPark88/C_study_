#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2;

    num2 = ++num1;

    printf("%d\n", num2);

    return 0;
}
/* Right to Left operator : 
1) operator in front of variable
ex) ++num1, --num1, +num1, -num1, !num1, ~num1, ...
2) = operator
num5 = num4 = num3 = num2 = num1 = 10; Right to left
*/ 