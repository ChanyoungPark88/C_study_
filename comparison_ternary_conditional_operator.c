#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2;

    num2 = num1 == 10 ? 100 : 200;      // if num1 is 10, 100 is stored to num2, else, 200 is stored to num2

    printf("%d\n", num2);       // 100: 100 is stored to num2 because num1 is 10
    // num2 = (num1 == 10) ? 100: 200;      same means but, it is easier to know

    return 0;
}