// 20200320 5:35
// 다음 소스 코드를 완성하여 1과 103 사이의 숫자 중 3으로 끝나는 숫자만 출력되게 만드세요.
#include <stdio.h>

int main()
{
    int i = 1;
    for (;;)
    {
        if (i % 10 != 3)
        {
            i++;
            continue;
        }
        
        if (i > 103)
            break;
        
        printf("%d ", i);
        i++;
    }

    return 0;
}
/* for 반복문에서 printf 함수로 i의 값을 출력한 뒤 i를 1씩 증가시키고 있습니다. 
따라서 printf 함수 윗 부분의 코드를 완성하여 3으로 끝나는 숫자를 출력해야 합니다.

먼저 3으로 끝나는 숫자를 구하려면 i를 10으로 나눈 뒤 나머지가 3인지 검사하면 됩니다. 
하지만 if (i % 10 == 3)에서 i를 출력하더라도 그 아래에 있는 printf에서도 i를 출력하므로 원하는 결과가 나오지 않게 됩니다. 
따라서 아래에 있는 printf에서 i가 출력되지 않도록 continue로 코드를 건너뛰어야 합니다.

3으로 끝나는 숫자만 출력되도록 하려면 if (i % 10 != 3)과 같이 if 조건문을 만들어서 3으로 끝나지 않는 숫자일 때 continue로 건너뜁니다. 
이렇게 하면 그 아래에 있는 printf에서 3으로 끝나는 숫자만 출력할 수 있습니다. 
그리고 continue로 코드를 건너뛰면 아래에 있는 i++;까지 건너뛰게 되므로 continue 위에 i++;을 넣어주어야 합니다.

for 반복문에 아무것도 지정되어 있지 않으므로 무한 루프입니다. 
따라서 if 조건문을 사용하여 i가 103보다 클 때 break로 루프를 중단해줍니다. 
여기서는 숫자를 출력하는 printf가 아래에 있으므로 i가 103과 같을 때 break로 중단해버리면 103은 출력되지 않습니다(103을 출력하기 전에 break로 루프가 중단됨). 
그러므로 103까지 출력하려면 i가 103일 때는 그냥 넘어가고 루프를 한 번 더 실행하여 i가 103보다 클 때 루프를 중단하는 것입니다. */