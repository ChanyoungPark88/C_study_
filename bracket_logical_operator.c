#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool b1;

    b1 = (false || false) && !false || false; // The priority of logical operators is !, &&, || 

    printf("%d\n", b1);      // 0 false AND true

    return 0;
}