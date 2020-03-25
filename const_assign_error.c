#include <stdio.h>

int main()
{
    const int con1 = 1;

    con1 =2;        // assigning a value to a constant results in compile error

    printf("%d\n", con1);

    return 0;
}

/*Result
const_assign_error.c: In function 'main':
const_assign_error.c:7:10: error: assignment of read-only variable 'con1'
     con1 =2;
     
positon of const
constant can position before and behind the datatype.
ex> const int con1 =1; < Correct
    int const con1 =1; < Also Correct
     */