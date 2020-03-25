#include <stdio.h>

int main()
{
    printf("%f\n", 0.1f);               // 0.100000: decimal notation of real number literal
    printf("%f\n", 0.1F);               // 0.100000: decimal notation of real number literal
    printf("%f\n", 1.0e-5f);            // 0.000010: exponential notation of real number literal
    printf("%f\n", 1.0E-5F);            // 0.000010: exponential notation of real number literal

    return 0;
}