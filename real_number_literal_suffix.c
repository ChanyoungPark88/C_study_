#include <stdio.h>

int main()
{
    printf("%f\n", 0.1f);                   // real number literal of size of float
    printf("%f\n", 0.1F);                   // real number literal of size of float
    printf("%f\n", 0.1);                    // real number literal of size of double
    printf("%Lf\n", 0.1l);                  // real number literal of size of long double
    printf("%Lf\n", 0.1L);                  // real number literal of size of long double

    printf("%f\n", 1.0e-5f);                // real number literal of size of float
    printf("%f\n", 1.0e-5F);                // real number literal of size of float
    printf("%f\n", 1.0e-5);                 // real number literal of size of double
    printf("%Lf\n", 1.0e-5l);               // real number literal of size of long double
    printf("%Lf\n", 1.0e-5L);               // real number literal of size of long double

    return 0;
}
/* real number literal suffix
suffix          datatype
f,F             float
(ellipsis)      double
l, L            long double
*/