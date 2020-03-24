#include <stdio.h>
#include <limits.h>     //자료형의 최댓값과 최솟값이 정의된 헤더 파일

int main()
{
    /*
    int num1 = 0;
    int size;

    size = sizeof num1;     //변수 num1의 자료형 크기를 구함

    printf("num1의 크기:%d\n", size);
    
    printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n", 
    sizeof(char),               //1: sizeof로 char 자료형의 크기를 구함
    sizeof(short),              //2: sizeof로 short 자료형의 크기를 구함
    sizeof(int),                //4: sizeof로 int 자료형의 크기를 구함
    sizeof(long),               //4: sizeof로 long 자료형의 크기를 구함
    sizeof(long long)           //8: sizeof로 long long 자료형의 크기를 구함
    );
    
    char num1 = CHAR_MIN;       // char의 최솟값
    short num2 = SHRT_MIN;      // short의 최솟값
    int num3 = INT_MIN;         // int의 최솟값
    long num4 = LONG_MIN;       // long의 최솟값
    long long num5 = LLONG_MIN; // long long의 최솟값
    // char, short, int는 %d로 출력하고 long은 %ld, long long은 %lld로 출력
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    // -128 -32768 -2147483648 -2147483648 -9223372036854775808
    */
    char num1 = CHAR_MIN -1;       // char의 최솟값보다 작은 수를 할당. 언더플로우 발생
    short num2 = SHRT_MIN -1;      // short의 최솟값보다 작은 수를 할당. 언더플로우 발생
    int num3 = INT_MIN -1;         // int의 최솟값보다 작은 수를 할당. 언더플로우 발생
    long num4 = LONG_MIN -1;       // long의 최솟값보다 작은 수를 할당. 언더플로우 발생
    long long num5 = LLONG_MIN -1; // long long의 최솟값보다 작은 수를 할당. 언더플로우 발생
    // char, short, int는 %d로 출력하고 long은 %ld, long long은 %lld로 출력
    // 부호 있는 정수에서 최솟값보다 작아지면 최댓값부터 다시 시작
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    // 127 32767 2147483647 2147483647 9223372036854775807

    unsigned char num6 = 0 -1;       // unsigned char의 최솟값보다 작은 수를 할당. 언더플로우 발생
    unsigned short num7 = 0 -1;      // unsigned short의 최솟값보다 작은 수를 할당. 언더플로우 발생
    unsigned int num8 = 0 -1;         // unsigned int의 최솟값보다 작은 수를 할당. 언더플로우 발생
    unsigned long num9 = 0 -1;        // unsigned long의 최솟값보다 작은 수를 할당. 언더플로우 발생
    unsigned long long num10 = 0 -1; // unsigned long long의 최솟값보다 작은 수를 할당. 언더플로우 발생
    // unsigned char, unsigned short, unsigned int는 %u로 출력하고, unsigned long은 %lu로 출력 
    // unsigned long long은 %llu로 출력
    // 부호 없는 정수에서 최솟값보다 작아지면 최댓값부터 다시 시작
    printf("%u %u %u %lu %llu\n", num6, num7, num8, num9, num10);
    // 255 65535 4294967295 4294967295 18446744073709551615
    return 0;
}