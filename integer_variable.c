#include <stdio.h>

int main()
{
    /*
    char num1 = -10;        //1바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
    short num2 = 30000;     //2바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
    int num3 = -1234567890; //4바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
    long num4 = 1234567890; //4바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
    long long num5 = -1234567890123456789;  //8바이트 부호 있는 정수형으로 변수를 선언하고 값 할당

    %d: 10진수(decimal)의 약어로 d를 사용
    %ld: long decimal의 첫 글자를 따서 ld
    %lld: long long decimal의 첫 글자를 따서 lld
    
    char, short, int는 %d로 출력하고 long은 %ld, long long은 %lld로 출력

    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);



    unsigned char num1 = 200;       //1바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    unsigned short num2 = 60000;    //2바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    unsigned int num3 = 4123456789; //4바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    unsigned long num4 = 4123456789;    //4바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    unsigned long long num5 = 12345678901234567890; //8바이트 부호 없는 정수형으로 변수를 선언하고 값 할당

    %u: 부호 없는(unsigned decimal) 10진수의 약어로 u를 사용
    %lu: long unsigned decimal에서 decimal을 제외한 첫 글자를 따서 lu를 사용
    %llu: long long unsigned decimal에서 decimal을 제외한 첫 글자를 따서 llu를 사용
    
    unsigned char, unsigned short, unsigned int는 %u로 출력하고 unsigned long은 %lu, unsigned long long은 %llu로 출력

    printf("%u %u %u %lu %llu", num1, num2, num3, num4, num5);

    char num1 = 128;        //char에 저장할 수 있는 최댓값 127보다 큰 수를 할당
                            //오버플로우 발생
    unsigned char num2 = 256;   //unsigned char에 저장할 수 있는 최댓값 255보다 큰 수를 할당
                                //오버플로우 발생
    printf("%d %u", num1, num2);
    
    char num1 = -129;        //char에 저장할 수 있는 최소값 -128보다 작은 수를 할당
                            //언더플로우 발생
    unsigned char num2 = -1;   //unsigned char에 저장할 수 있는 최소값 0보다 작은 수를 할당
                                //언더플로우 발생
    printf("%d %u", num1, num2);

    오버플로우가 발생하면 다시 최솟값부터 시작, 언더플로우가 발생하면 다시 최댓값부터 시작
    */
    return 0;
}