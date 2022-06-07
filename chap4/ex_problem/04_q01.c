#include <stdio.h>
#include "../IntStack.h"
#include "../IntStack.c"

int main(void)
{
    IntStack s;
    if(Initialize(&s, 64) == -1) {
        puts("스택 생성에 실패하였습니다.");
        return (1);
    }

    while (1) {
        int menu, x;
        printf("현재 데이터 수 : %d / %d\n", Size(&s), Capacity(&s));
        printf("(1)푸시    (2)팝    (3)피크     (4)출력\n");
        printf("(5)클리어  (6)용량  (7)데이터 수 (8)IsEmpty\n");
        printf("(9)IsFull  (10)검색 (0)종료\n>>");
        scanf("%d", &menu);

        if(menu == 0) break;
        switch(menu) {
            case 1 :
            printf("데이터 : ");
            scanf("%d", &x);
            if(Push(&s, x) == -1)
            puts("\a오류 : 푸시에 실패하였습니다.");
            break;

            case 2 :
            if(Pop(&s, &x) == -1)
            puts("\a오류 : 팝에 실패하였습니다.");
            else
            printf("팝 데이터는 %d입니다.\n", x);
            break;

            case 3 :
            if(Peek(&s, &x) == -1)
            puts("\a오류 : 피크에 실패하였습니다.");
            else
            printf("피크 데이터는 %d입니다.\n", x);
            break;

            case 4 :
            Print(&s);
            break;

            case 5 :
            Clear(&s);
            break;

            case 6 :
            printf("%d\n", Capacity(&s));
            break;

            case 7 :
            printf("%d\n", Size(&s));
            break;

            case 8 :
            if(IsEmpty(&s) == 1)
            puts("스택이 비어있습니다.");
            else
            puts("스택이 비어있지않습니다.");
            break;

            case 9 :
            if(IsFull(&s) == 1)
            puts("스택이 가득차있습니다.");
            else
            puts("스택이 가득차있지않습니다.");
            break;

            case 10 :
            printf("검색할 값 : ");
            scanf("%d", &x);
            if(Search(&s, x) == -1)
            puts("검색값을 찾지 못했습니다.");
            else
            printf("%d는 stk[%d]에 있습니다.\n", x, Search(&s, x));
            break;        
        }
    }
    Terminate(&s);
    return (0);
}