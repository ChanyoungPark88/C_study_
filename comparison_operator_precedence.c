# include <stdio.h>

int main()
{
    int num1;

    num1 = 5 == 5 < 10;     // < have higher priority than == 

    printf("%d\n", num1);   // 0

    return 0;
}