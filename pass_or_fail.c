#include <stdio.h>

int main()
{
    int language;
    int english;
    int math;
    int science;
    
    int sum;
    int avg;
    
    scanf("%d %d %d %d", &language, &english, &math, &science);
    
    if (language <= 100 && language >= 0 && english <= 100 && english >= 0 && math <= 100 && math >= 0 && science <= 100 && science >= 0)
    {
        sum = language+english+math+science;
        avg = sum / 4;

        if(avg >= 85)
            printf("Pass\n");
        else
            printf("Fail\n");     
    }
    else
    {
        printf("Wrong Score.\n");
    }
    
    return 0;
    
}