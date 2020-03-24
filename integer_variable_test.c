/* 심사문제 1. 다음 소스코드를 완성하여 0 0 -128이 출력되게 만드세요
#include <stdio.h>

int main()
{


    num1 = 65536; -> unsigned short
    num2 = 4294967296; -> unsigned int나 unsigned long이 답이지만 printf에 %u로 표기가 되어있기 때문에 long이 될 수 없음 따라서 unsigned int
    num3 = 128; -> char

    printf("%u %u %d\n", num1, num2, num3);

    return 0;

}

답

#include <stdio.h>

int main()
{
    unsigned short num1;
    unsigned int num2;
    char num3;

    num1 = 65536;
    num2 = 4294967296;
    num3 = 128;

    printf("%u %u %d\n", num1, num2, num3);

    return 0;

}*/