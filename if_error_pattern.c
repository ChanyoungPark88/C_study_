//20200331 1:50

#include <stdio.h>

int main()
{
    int gender;
    int age;
    int isOwner;

    scanf("%d %d %d", &gender, &age, &isOwner);

    printf("Hi\n");
    printf("Open the door\n");

    if (gender == 2)
    {
        printf("Bye\n");
        printf("Close the door\n");
        return 0;
    }
    
    if (age < 30)
    {
        printf("Bye\n");
        printf("Close the door\n");
        return 0;
    }

    if (isOwner == 0)
    {
        printf("Bye\n");
        printf("Close the door\n");
        return 0;
    }
    
    return 0;
}