/* 다음 소스코드를 완성하여 -128 65535 0 9223372036854775807이 출력되게 만드세요

#include <stdio.h>

int main()
{
    int8_t num1 = INT8_MIN;
    uint16_num2 = UINT16_MAX;
    uint32_t num3 = 0;
    int64_t num4 = INT64_MAX;

    printf("%d %u %u %lld\n", num1, num2, num3, num4);

    return 0;
}*/

#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t num1 = INT8_MIN;
    uint16_t num2 = UINT16_MAX;
    uint32_t num3 = 0;
    int64_t num4 = INT64_MAX;

    printf("%d %u %u %lld\n", num1, num2, num3, num4);

    return 0;
}
