//#include <stdio.h>
//int main()
//{
//int i = 0;
//while (i < 5) {
//printf("%d \n", i);
//i++;
//}
//return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int hap = 0;
//	int i;
//
//	i = 100;
//	while (i <= 200) {
//		hap += i;
//		i++;
//	}
//	printf("100에서 200까지의 합: %d \n", hap);
//}

//#include <stdio.h>
//int main()
//{
//	int i, hap = 0;
//	for (i = 123; i <= 456; i++) {
//		continue;
//		hap = hap + i;
//	}
//	printf("%d \n", hap);
//}

//#include <stdio.h>
//int main()
//{
//	int f, s;
//	scanf("%d %d", &f, &s);
//	int start, end;
//	if (f < s) {
//		start = f;
//		end = s;
//	}
//	else {
//		start = s;
//		end = f;
//	}
//	while (start <= end) {
//		if (start % 2 != 0) {
//			printf("%d \n", start);
//		}
//		start++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int num;
//    scanf("%d",&num);//341
//    int ori = num;
//
//    int temp = 1;
//    while (num >= 10) {
//        num /= 10;
//        temp *= 10;
//    }
//
//    while (num >= 1) {
//        int n1 = ori / temp;
//        ori %= temp;
//        //n1 *= 2;
//        while (n1 >= 1) {
//            printf("\u2665\u2665");
//            n1--;
//        }
//        printf("\n");
//        temp = temp / 10;
//    }
//}

//#include <stdio.h>
//int main()
//{
//	int i;
//	int hap = 0;
//
//	i = 1;
//	while (i <= 100)
//	{
//		if (i % 5 == 0 || i % 8 == 0)
//			hap = hap + i;
//
//		i++;
//	}
//	printf("%d\n", hap);
//}

//#include <stdio.h>
//
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도 : %d도\n", temperature);
//		temperature--;
//	} while (temperature > 28);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do 
//	{
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int select;
//	enum {LOGIN, SIGNIN, OPTION, MAKER};
//	do {
//		printf("1. 로그인\n2. 회원가입\n3. 옵션\n4. 만든 사람들\n");
//		scanf("%d", &select);
//
//		switch (select) {
//		case LOGIN:
//			printf("아이디를 입력해주세요.\n");
//			break;
//		case SIGNIN:
//			printf("새로 만들 아이디를 입력해주세요.\n");
//			break;
//		case OPTION:
//			printf("설정할 옵션을 선택해주세요.\n");
//			break;
//		case MAKER:
//			printf("만든 사람들:\n");
//			break;
//		}
//	} while (select >= 1 && select <= 4);
//		printf("종료합니다.\n");
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	do {
		printf("\n%d번쨰 날 !\n", ++day);

	}
 }