#include <stdio.h>

int main()
{
    char s1[10];    // define arrays that size 10 and type char

    printf("input string: ");
    scanf("%s", s1);        // receive standard input and store them into array type string
                            // important: array does not put & in front. because array contains the address like a pointer.

    printf("%s\n", s1);     // print string

    return 0;
}