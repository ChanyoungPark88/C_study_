#include <stdio.h>

int main()
{
    int amount;

    scanf("%d", &amount);

    while (amount >= 1200)
    {
        amount -= 1200;
        printf("%d\n", amount);
    }
    
    return 0;
}