#include <stdio.h>
#include <stdbool.h>

int main()
{
    if(true)                    // use bool true
        printf("true\n");       // print true because true
    else
        printf("false\n");

    if(false)                   // use bool false
        printf("true\n");
    else
        printf("false\n");      // print false because false

    return 0;        
}