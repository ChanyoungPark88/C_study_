#include <stdio.h>

int main()
{
    const int con1 = 1;     // constant. initialize concurrently with declaration
    const float con2 = 0.1f;    // const. initialize concurrently with declaration
    const char con3 = 'a';      // const. initialize concurrently with declaration

    printf("%d %f %c\n", con1, con2, con3);

    return 0;
}