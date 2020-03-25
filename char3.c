// 제어 문자 사용하기

#include <stdio.h>

int main()
{
    char c1 = 'a';              // 문자 a 할당
    char c2 = 'b';              // 문자 b 할당

    char linefeed = '\n';       // 제어 문자 \n 할당

    char space = ' ';

    printf("%c%c%c%c", c1 ,linefeed, c2, linefeed);     // 제어 문자도 %c로 출력할 수 있음
    printf("%d 0x%x\n", linefeed, linefeed);        // 제어 문자의 ASCII 코드 출력
    printf("%c %d 0x%x\n", space, space, space);
    return 0;
}

/* 
10진수	16진수	문자	표기법   설명
10	    0x0A	LF	    \n	    개행, 라인 피드(Line Feed), 새 줄(new line), 줄바꿈
13	    0x0D	CR	    \r	    복귀, 캐리지 리턴(Carriage Return), 줄의 끝에서 시작 위치로 되돌아감
9	    0x09	TAB	    \t	    수평 탭(horizontal tab)
CR, LF의 유래
CR, LF는 타자기에서 나온 용어입니다. 타자기에서 줄바꿈을 하려면 종이를 오른쪽으로 쭉 밀고, 다시 종이를 한 줄 만큼 위로 올립니다. 
이렇게 종이를 오른쪽으로 밀어서 처음으로 오게 하는 행동을 복귀(Carriage Return)라고 하고, 종이를 위로 올리는 행동을 개행(Line Feed)이라고 합니다.

이제 타자기는 사라지고 컴퓨터와 키보드로 대체되었지만 
타자기의 흔적이 완전히 사라지지 않고 남은 것이 CR(\r)과 LF(\n)입니다. 
컴퓨터에서 CR, LF는 둘 다 새 줄, 줄바꿈으로 사용되고 있으며 운영체제 별로 조금씩 차이가 있습니다.

다음은 텍스트 파일을 저장할 때 줄바꿈 규칙입니다.

Windows: CR LF
유닉스, 리눅스, OS X: LF
Mac OS 9(클래식): CR
*/