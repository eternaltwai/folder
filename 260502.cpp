////#include <stdio.h>
////int main()
////{
////int i = 0;
////while (i < 5) {
////printf("%d \n", i);
////i++;
////}
////return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	int hap = 0;
////	int i;
////
////	i = 100;
////	while (i <= 200) {
////		hap += i;
////		i++;
////	}
////	printf("100에서 200까지의 합: %d \n", hap);
////}
//
////#include <stdio.h>
////int main()
////{
////	int i, hap = 0;
////	for (i = 123; i <= 456; i++) {
////		continue;
////		hap = hap + i;
////	}
////	printf("%d \n", hap);
////}
//
////#include <stdio.h>
////int main()
////{
////	int f, s;
////	scanf("%d %d", &f, &s);
////	int start, end;
////	if (f < s) {
////		start = f;
////		end = s;
////	}
////	else {
////		start = s;
////		end = f;
////	}
////	while (start <= end) {
////		if (start % 2 != 0) {
////			printf("%d \n", start);
////		}
////		start++;
////	}
////	return 0;
////}
//
////#include <stdio.h>
////
////int main() {
////    int num;
////    scanf("%d",&num);//341
////    int ori = num;
////
////    int temp = 1;
////    while (num >= 10) {
////        num /= 10;
////        temp *= 10;
////    }
////
////    while (num >= 1) {
////        int n1 = ori / temp;
////        ori %= temp;
////        //n1 *= 2;
////        while (n1 >= 1) {
////            printf("\u2665\u2665");
////            n1--;
////        }
////        printf("\n");
////        temp = temp / 10;
////    }
////}
//
////#include <stdio.h>
////int main()
////{
////	int i;
////	int hap = 0;
////
////	i = 1;
////	while (i <= 100)
////	{
////		if (i % 5 == 0 || i % 8 == 0)
////			hap = hap + i;
////
////		i++;
////	}
////	printf("%d\n", hap);
////}
//
////#include <stdio.h>
////
////int main()
////{
////	int temperature = 20;
////	do
////	{
////		printf("현재 온도 : %d도\n", temperature);
////		temperature--;
////	} while (temperature > 28);
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	int input;
////	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
////	do 
////	{
////		printf("\n메뉴를 선택하세요.\n");
////		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
////		scanf("%d", &input);
////
////		switch (input) {
////		case NEWGAME:
////			printf("새 게임 시작\n");
////			break;
////		case LOADGAME:
////			printf("세이브 데이터 로드\n");
////			break;
////		case OPTION:
////			printf("옵션 세팅\n");
////			break;
////		}
////	} while (input != GAMEOVER);
////
////	printf("게임을 종료합니다.\n");
////	return 0;
////}
//
////#include <stdio.h>
////
////int main()
////{
////	int select;
////	enum {LOGIN, SIGNIN, OPTION, MAKER};
////	do {
////		printf("1. 로그인\n2. 회원가입\n3. 옵션\n4. 만든 사람들\n");
////		scanf("%d", &select);
////
////		switch (select) {
////		case LOGIN:
////			printf("아이디를 입력해주세요.\n");
////			break;
////		case SIGNIN:
////			printf("새로 만들 아이디를 입력해주세요.\n");
////			break;
////		case OPTION:
////			printf("설정할 옵션을 선택해주세요.\n");
////			break;
////		case MAKER:
////			printf("만든 사람들:\n");
////			break;
////		}
////	} while (select >= 1 && select <= 4);
////		printf("종료합니다.\n");
////	return 0;
////}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	do {
//		printf("\n%d번쨰 날 !\n", ++day);
//		printf("오늘도 뭘 할까요?\n");
//		pritnf("1. 코딩 공부한다.\n");
//		printf("그외. 끝낸다.\n >>");
//		scanf("%d", command);
//		if (command != 1)break;
//		int randInt = rand() % 5 + 1;
//
//		switch (randInt) {
//		case 1:
//			printf("기분이 좋네요.\n");
//		case 3:
//			printf("도서관에서. ");
//		case 2:
//			printf("기분이 나빠요.\n");
//		case 4:
//			printf("카페에서 ");
//			break;
//		case 5:
//			printf("학원에서  ");
//		}
//		printf("코딩 공부합니다.\n");
//		study++;
//	} while (1);
//		if (day <= 3) {
//			printf("그대로입니다...\n");
//		}
//		else {
//			int level = study / 8;
//			switch (level) {
//				
//			case 0:
//				printf("코딩새싹이 되었습니다.!\n");
//				break;
//			case 1:
//				printf("프로그래머가 되었습니다.!\n");
//				break;
//			case 2:
//				printf("FrontEnd 개발자가 되었습니다.!\n");
//				break;
//			case 3:
//				printf("BackEnd 개발자가 되었습니다.!\n");
//				break;
//			default:
//				printf("풀스텍 개발자가 되었습니다.!\n");
//				break;
//			}
//		}
//		return 0;
// }

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

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int game = 0;
//	int meet = 0;
//	int rest = 0;
//	do {
//		printf("\n--- %d번째 날 ---\n", ++day);
//
//		if (rest > 0) {
//			rest--;
//		}
//		printf("1. 코딩 공부를 한다.\n");
//		printf("2. 게임을 하며 시간을 보낸다.\n");
//		printf("3. 사람들을 만나러 나간다.\n");
//		printf("4. 집에서 휴식을 취한다.\n");
//		printf("그외. 프로그램을 종료한다.\n >> ");
//		scanf("%d", &command);
//
//		if (command > 4 || command < 1) break;
//		int randInt = rand() % 5 + 1;
//		int randInt2 = rand() % 3 + 1;
//
//		if (command == 1) {
//			switch (randInt) {
//			case 1:
//				printf("컨디션이 좋은 상태로, ");
//			case 3:
//				printf("조용한 도서관에서 ");
//				break;
//			case 2:
//				printf("조금 피곤한 상태였지만, ");
//			case 4:
//				printf("근처 카페에서 ");
//				break;
//			case 5:
//				printf("전문 학원에서 ");
//			}
//			printf("코딩 공부를 열심히 진행했습니다.\n");
//			study++;
//		}
//		else if (command == 2) {
//			switch (randInt) {
//			case 1:
//				printf("컨디션이 좋은 상태로, ");
//			case 3:
//				printf("화려한 조명의 PC방에서 ");
//				break;
//			case 2:
//				printf("조금 피곤한 상태였지만, ");
//			case 4:
//				printf("대형 e스포츠 경기장에서 ");
//				break;
//			case 5:
//				printf("간단하게 집에서 ");
//				break;
//			}
//			printf("게임을 하며 스트레스를 풀었습니다.\n");
//			game++;
//		}
//		else if (command == 3) {
//			switch (randInt) {
//			case 1:
//				printf("컨디션이 좋은 상태로, ");
//			case 3:
//				printf("분위기 좋은 루프탑 바에서 ");
//				break;
//			case 2:
//				printf("조금 피곤한 상태였지만, ");
//			case 4:
//				printf("사람들로 북적이는 핫플레이스에서 ");
//				break;
//			case 5:
//				printf("아늑한 커뮤니티 라운지에서 ");
//				break;
//			}
//			printf("지인들과 만나 즐거운 시간을 보냈습니다.\n");
//			meet++;
//		}
//		else if (command == 4) {
//			switch (randInt2) {
//			case 1:
//				printf("안마의자가 있는 조용한 힐링카페에서 ");
//				break;
//			case 2:
//				printf("푸르른 잔디가 깔린 한강공원에서 ");
//				break;
//			case 3:
//				printf("집에 있는 침대에서 ");
//				break;
//			}
//			printf("충분한 휴식을 취하며 피로를 회복했습니다.\n");
//			rest += 3;
//		}
//	} while (1);
//
//	printf("\n============================================\n");
//	printf("                   결과              \n");
//	printf("============================================\n");
//	if (day <= 7) {
//		printf("별다른 활동을 하지 않은 채 짧은 시간이 흘러갔습니다.\n");
//	}
//	else {
//		int code = study / 8;
//		int level = game / 8;
//		int people = meet / 8;
//
//
//		if (rest != 0) {
//
//			if (code >= level && code >= people) {
//				switch (code) {
//				case 0:
//					printf("기초 문법을 갓 뗀 코딩 입문자가 되었습니다.\n"); break;
//				case 1:
//					printf("스스로 간단한 프로그램을 만드는 주니어 개발자가 되었습니다.\n"); break;
//				case 2:
//					printf("사용자 화면을 전문적으로 설계하는 웹 프론트엔드 개발자가 되었습니다.\n"); break;
//				case 3:
//					printf("서버와 데이터베이스를 안정적으로 관리하는 백엔드 개발자가 되었습니다.\n"); break;
//				default:
//					printf("모든 시스템의 설계를 총괄하는 수석 소프트웨어 엔지니어가 되었습니다.\n"); break;
//				}
//			}
//
//			else if (level > code && level >= people) {
//				switch (level) {
//				case 0:
//					printf("가끔 취미로 게임을 즐기는 일반 사용자가 되었습니다.\n"); break;
//				case 1:
//					printf("주변 지인들 사이에서 상당한 실력자로 인정받게 되었습니다.\n"); break;
//				case 2:
//					printf("커뮤니티나 서버 내에서 이름이 알려진 고수가 되었습니다.\n"); break;
//				case 3:
//					printf("프로 무대 진입을 눈앞에 둔 최상위권 랭커가 되었습니다.\n"); break;
//				default:
//					printf("세계 대회에서 활약하는 전문 프로게이머가 되었습니다.\n"); break;
//				}
//			}
//			else if (people > code && people > level) {
//				switch (people) {
//				case 0:
//					printf("주변에 마음이 맞는 소수의 좋은 친구들을 두게 되었습니다.\n"); break;
//				case 1:
//					printf("원만한 대인관계를 유지하며 많은 지인을 사귀었습니다.\n"); break;
//				case 2:
//					printf("넓은 인맥을 바탕으로 사회적인 영향력을 가진 인물이 되었습니다.\n"); break;
//				case 3:
//					printf("탁월한 협상 능력을 발휘하는 전문 외교관이 되었습니다.\n"); break;
//				default:
//					printf("많은 사람들의 신뢰와 지지를 받는 정치가가 되었습니다.\n"); break;
//				}
//			}
//		}
//		else {
//			printf("당신은 오랫동안 쉬지 않으며 지나치게 무리하며 살아왔습니다.\n");
//			printf("결과적으로 누적된 피로 때문에 건강을 크게 해치고 말았습니다.\n");
//			printf("원하는 목표를 이루는 것도 중요하지만, 때로는 적절한 휴식이 반드시 필요합니다.\n");
//		}
//	}
//	printf("============================================\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다.\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3) {
//			printf("도중에 잠들었다.\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if (sheep == 3) {
//			printf("졸아서 양을 세지 못했다.\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다.\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("깜빡 졸았다.\n");
//			continue;
//		}
//		else if (sheep == 45) {
//			printf("도중에 잠들었다.\n");
//			break;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 1; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++)
//	{
//		sum_number = sum_number + number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요 :");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약\n");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for (number = 10; number <= 99; number++)
//	{
//		printf("%d\n", number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int sum;
//	for (number = 3; number <= 8; number++)
//	{
//		sum = sum + number;
//	}
//	printf("숫자들을 곱한 값: %d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int number = 0;
//
//    for (number = 1; number <= 50; number++)
//    {
//        int first = number % 10;
//        int second = number / 10;
//
//        if ((first % 3 == 0 && first) || (second % 3 == 0 && second)) {
//            printf("%d\n", number);
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("100 이하의 제곱수를 출력합니다.\n");
//
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("100이하 7의 배수를 출력합니다.\n");
//
//	for (num = 7; num <= 100; num + 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char input;
//	for (;;)
//	{
//		scanf(" %c ", &input);
//		switch (input)
//		{
//		case 's':
//			printf("start game\n");
//			break;
//		case 'e':
//			printf("exit game\n");
//			return 0;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number - 1; exitFor >= 1  ; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//
//	int number, exitFor;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number = 1; exitFor >= 10; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for (number = 0; number <= 200; number += 11)
//	{
//		printf("%d\n", number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float sqLine;
//	for (sqLine = 0; sqLine *4 <= 21; sqLine += 0.1)
//	{
//		printf("%0.1f\n", sqLine);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번\n", myClass, student);
//	}
//
//	myClass++;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번\n", myClass, student);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++)
//	{
//		for (student = 1; student <= 3; student++)
//		{
//			printf("%d반 %d번\n", myClass, student);
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++) {
//		for (student = 1; student <= 30; student++) {
//			printf("%d반 %d번\n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d학년 %d반 %d번 \n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int secnumber;
//	for (number = 2; number <= 9; number++)
//	{
//		for (secnumber = 1; secnumber <= 9; secnumber++)
//		{
//			printf("%d x %d = %d\n", number, secnumber, number * secnumber);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{+
//	int number;
//	int secnumber;
//	for (number = 2; number <= 9; number++)
//	{
//		if (number == 3) { continue; }
//		for (secnumber = 1; secnumber <= 9; secnumber++)
//		{
//			printf("%d x %d = %d\n", number, secnumber, number * secnumber);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int dice;
//	int secdice;
//
//	for (dice = 1; dice <= 4; dice++)
//	{
//		for (secdice = 1; secdice <= 6; secdice++)
//		{
//			printf("4면 - %d, 6면 - %d\n", dice, secdice);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		printf("%d번째 내부 반복문 진입\n", outer);
//
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//		printf("%d번째 내부 반복문 탈출\n", outer);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer, inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < 5; inter++) {
//			if (outer == inter || outer + inter == 4)
//				printf("*");
//			else printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < 5; inter++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y = 1; y <= LINE; y += 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int outer = 1; outer <= LINE; outer ++) {
//		for (int inter = LINE; inter >= outer; inter--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y = LINE; y >= 1; y--)
//	{
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//
//	int yvar = 1;
//
//	for (int xvar = LINE; xvar >= 1; xvar--) {
//		for (int x = xvar; x >= 1; x--) {
//			printf(" ");
//		}
//
//		for (int y = 1; y <= yvar; y++) {
//			printf("*");
//		}
//		printf("\n");
//		yvar += 2;
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	//int LINE = 3;
	//scanf("%d", &LINE);

	int xvar = 3;
	int yvar = 1;
	int count = 1;
	int z = 1;

	for (; count < 6;) {
		for (int x = xvar; x >= 1; x--) {
			printf(" ");
		}
		for (int y = 1; y <= yvar; y++) {
			printf("*");
		}
		printf("\n");
		xvar -= z;
		yvar += 2 * z;

		if (yvar == 5) {
			z = -z;
		}
		count++;
	}
	return 0;


		//a = 1;
		//n += a;
		//a = -a;
		//n += a;
}

