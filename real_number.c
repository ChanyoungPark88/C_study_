#include <stdio.h>

int main()
{
    float num1 = 0.1f;                      // 단정밀도 부동소수점 변수를 선언하고 값을 할당 float는 숫자 뒤에 f를 붙임
    double num2 = 3867.215820;              // 배정밀도 부동소수점 변수를 선언하고 값을 할당 double은 숫자 뒤에 아무것도 붙이지 않음
    long double num3 = 9.327513L;           // 배정밀도 부동소수점 변수를 선언하고 값을 할당 long double은 숫자 뒤에 l을 붙임

    // float와 double은 %f로 출력, long double은 %Lf로 출력
    // %f: 부동소수점(floating point)의 약어로 f를 사용합니다.
    // %Lf: long floating point에서 point를 제외한 첫 글자를 따서 Lf를 사용합니다.

    printf("%f %f %Lf\n", num1, num2, num3);

    float num4 = 3.e5f;                     // 지수 표기법으로 300000을 표기
    double num5 = -1.3827e-2;               // 지수 표기법으로 -0.013827을 표기
    long double num6 = 5.21e+9L;            // 지수 표기법으로 5210000000을 표기

    printf("%f %f %Lf\n", num4, num5, num6);

    // 지수 표기법으로 출력할 때는 float와 double은 %e로 출력, long double은 %Le로 출력
    // %e: 지수 표기법(exponential notation)의 약어로 e를 사용합니다.
    // %Le: long exponential notation에서 notation을 제외한 첫 글자를 따서 Le를 사용합니다.
    printf("%e %e %Le\n", num4, num5, num6);
    return 0;
}