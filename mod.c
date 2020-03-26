//20200326 12:25

#include <stdio.h>

int main()
{
    printf("%d\n", 1 % 3);          // 1: divide 1 by 3, the value is 0 and the rest is 1
    printf("%d\n", 2 % 3);          // 2: divide 2 by 3, the value is 0 and the rest is 2
    printf("%d\n", 3 % 3);          // 0: divide 3 by 3, the value is 1 and the rest is 0
    printf("%d\n", 4 % 3);          // 1: divide 4 by 3, the value is 1 and the rest is 1
    printf("%d\n", 5 % 3);          // 2: divide 5 by 3, the value is 1 and the rest is 2
    printf("%d\n", 6 % 3);          // 0: divide 6 by 3, the value is 2 and the rest is 0

    return 0;
}