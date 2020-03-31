#include <stdio.h>

int main()
{
    int multi5;
    int multi11;
    
    scanf ("%d %d", &multi5, &multi11);

    for (int i = multi5; i <= multi11; i++)
    {
        if (i % 5 ==0 && i % 11 == 0)
            printf("FizzBuzz\n");
        else if (i % 5 == 0)
            printf("Fizz\n");
        else if (i % 11 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);         
    }
    
    return 0;
}