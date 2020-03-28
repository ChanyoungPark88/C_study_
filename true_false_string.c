#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool b1 = true;
    bool b2 = false;

    printf(b1 ? "true": "false");           // print true because b1 is true
    printf("\n");
    printf(b2 ? "true": "false");           // print false because b2 is false
    printf("\n");

    printf("%s\n", b1 ? "true" : "false");      // print true because b1 is true
    printf("%s\n", b2 ? "true" : "false");      // print false because b2 is false

    return 0;
}