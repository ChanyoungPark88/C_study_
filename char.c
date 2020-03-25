// 문자 변수 선언하기
#include <stdio.h>

int main()
{
    char c1 = 'a';      // 문자 변수를 선언하고 문자 a를 저장
    char c2 = 'b';      // 문자 변수를 선언하고 문자 b를 저장
    // char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정숫값이 출력됨
    printf("%c, %d\n", c1, c1);     // a, 97: a의 ASCII 코드 값은 97
    printf("%c, %d\n", c2, c2);     // b, 98: b의 ASCII 코드 값은 98
    
    char c3 = 97;       // a의 ASCII 코드값 97저장
    char c4 = 98;       // b의 ASCII 코드값 98저장
    // char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정숫값이 출력됨
    printf("%c, %d\n", c3, c3);     // a, 97
    printf("%c, %d\n", c4, c4);     // b, 98

    char c5 = 0x61;     // a의 ASCII 코드값 0x61 할당
    char c6 = 0x62;     // b의 ASCII 코드값 0x62 할당
    // char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정숫값이 출력됨
    // %x로 출력하면 16진수로 출력됨
    // %x, %X: 16진수(hexadecimal)에서 hex의 x를 사용
    printf("%c, %d, 0x%x\n", c5, c5, c5);
    printf("%c, %d, 0x%x\n", c6, c6, c6);

    char c7 = '0';      // 문자 0을 저장
    char c8 = 0;        // 숫자 0을 저장

    printf("%c, %d\n", c7, c7);     // 0, 48: 문자 상태로 0이 출력됨
                                    // 문자 0의 ASCII코드 48이 출력됨
    printf("%c, %d\n", c8, c8);     // 0: ASCII 코드 0은 널문자이므로 아무것도 출력되지 않음
                                    // 정수 0이 출력됨
    return 0;
}