#include <stdio.h>

int main()
{
    int num1 = 11;
    float num2 = 4.4f;

    printf("%f\n", num1 + num2);
    printf("%f\n", num1 - num2);
    printf("%f\n", num1 * num2);
    printf("%f\n", num1 / num2);

    return 0;
}
// result is real number when calculate real number and integer. Because real number has more wider range than integer.