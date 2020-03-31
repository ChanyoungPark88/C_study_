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
        goto EXIT;
    if (age < 30)
        goto EXIT;
    if (isOwner == 0)
        goto EXIT;
EXIT:
    printf("Bye\n");
    printf("Close the door\n");

    return 0;
}