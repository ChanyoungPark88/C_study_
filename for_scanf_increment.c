#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("Hello, World! %d\n", i);
    }
    
    return 0;
}