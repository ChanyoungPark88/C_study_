#include <stdio.h>

int main()
{
    int num1 = 5;
    int num2;

    num2 = num1 ? 100 : 200;        // if num1 is true, 100 is stored to num2 else, 200 is stored to num2

    printf("%d\n", num2);

    return 0;
}