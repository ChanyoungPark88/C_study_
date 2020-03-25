#include <stdio.h>

int main()
{
    printf("%ld\n", -10L);                  // size of long integer literal
    printf("%lld\n", -1234567890123456789LL);       // size of long long integer literal

    printf("%u\n", 10U);                    // size of unsigned int integer literal
    printf("%lu\n", 1234567890UL);          // size of unsigned long integer literal

    printf("%lu\n", 10UL);                  // size of unsigned long integer literal
    printf("%llu\n", 1234567890123456789ULL);       // size of unsigned long long integer literal

    return 0;
}
/* integer literal suffix
suffix          datatype
(ellipsis)      int
l, L            long
u, U            Unsigned int
ul, UL          unsigned long
ll, LL          long long
ull, ULL        unsigned long long*/