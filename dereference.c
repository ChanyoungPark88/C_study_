#include <stdio.h>

int main()
{
    int *numPtr;            // define pointer variable
    int num1 = 10;          // store 10 into int variable after define

    numPtr = &num1;         // store num1's memory address into pointer variable

    printf("%d\n", *numPtr);        // dereference operator accesses the memory address of num1 and retrieves the value

    return 0;
}
/* 
포인터는 메모리의 특정 위치를 가리킬 때 사용하며, 정수형으로 된 메모리 주소가 저장되어 있다.
포인터는 *를 사용하여 선언하며 이미 선언된 포인터에 *를 사용하면 포인터에 저장된 메모리 주소에 접근(역참조)하여 값을 가져오거나
저장할 수 있다.

자료형 *포인터이름;     // 포인터 선언
*포인터;               // 포인터를 역참조하여 값을 가져옴
*포인터 = 값;           // 포인터를 역참조하여 값을 저장

변수의 메모리 주소를 구할 때는 주소 연산자 &를 사용한다. &로 구한 주소는 포인터에 할당할 수 있다.
즉, 포인터와 변수의 메모리 주소는 자료형이 같다.

포인터 = &변수;         // 변수의 메모리 주소를 포인터에 저장
*/