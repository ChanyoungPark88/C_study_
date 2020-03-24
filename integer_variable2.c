#include <stdio.h>
#include <limits.h>     //�ڷ����� �ִ񰪰� �ּڰ��� ���ǵ� ��� ����

int main()
{
    /*
    int num1 = 0;
    int size;

    size = sizeof num1;     //���� num1�� �ڷ��� ũ�⸦ ����

    printf("num1�� ũ��:%d\n", size);
    
    printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n", 
    sizeof(char),               //1: sizeof�� char �ڷ����� ũ�⸦ ����
    sizeof(short),              //2: sizeof�� short �ڷ����� ũ�⸦ ����
    sizeof(int),                //4: sizeof�� int �ڷ����� ũ�⸦ ����
    sizeof(long),               //4: sizeof�� long �ڷ����� ũ�⸦ ����
    sizeof(long long)           //8: sizeof�� long long �ڷ����� ũ�⸦ ����
    );
    
    char num1 = CHAR_MIN;       // char�� �ּڰ�
    short num2 = SHRT_MIN;      // short�� �ּڰ�
    int num3 = INT_MIN;         // int�� �ּڰ�
    long num4 = LONG_MIN;       // long�� �ּڰ�
    long long num5 = LLONG_MIN; // long long�� �ּڰ�
    // char, short, int�� %d�� ����ϰ� long�� %ld, long long�� %lld�� ���
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    // -128 -32768 -2147483648 -2147483648 -9223372036854775808
    */
    char num1 = CHAR_MIN -1;       // char�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
    short num2 = SHRT_MIN -1;      // short�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
    int num3 = INT_MIN -1;         // int�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
    long num4 = LONG_MIN -1;       // long�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
    long long num5 = LLONG_MIN -1; // long long�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
    // char, short, int�� %d�� ����ϰ� long�� %ld, long long�� %lld�� ���
    // ��ȣ �ִ� �������� �ּڰ����� �۾����� �ִ񰪺��� �ٽ� ����
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    // 127 32767 2147483647 2147483647 9223372036854775807

    unsigned char num6 = 0 -1;       // unsigned char�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
    unsigned short num7 = 0 -1;      // unsigned short�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
    unsigned int num8 = 0 -1;         // unsigned int�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
    unsigned long num9 = 0 -1;        // unsigned long�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
    unsigned long long num10 = 0 -1; // unsigned long long�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
    // unsigned char, unsigned short, unsigned int�� %u�� ����ϰ�, unsigned long�� %lu�� ��� 
    // unsigned long long�� %llu�� ���
    // ��ȣ ���� �������� �ּڰ����� �۾����� �ִ񰪺��� �ٽ� ����
    printf("%u %u %u %lu %llu\n", num6, num7, num8, num9, num10);
    // 255 65535 4294967295 4294967295 18446744073709551615
    return 0;
}