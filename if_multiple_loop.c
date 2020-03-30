#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num1 = 0;

    bool exitOuterLoop = false;             // Variable that determines whether to exit the outer loop
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (num1 == 20)                 // if num1 is 20
            {
                exitOuterLoop = true;       // go to Outer Loop
                break;                      // break inner loop
            }
            
            num1++;
        }
        
        if (exitOuterLoop == true)          // if exit the outer loop
            break;                          // break outer loop
    }
    
    printf("%d\n", num1);

    return 0;
}