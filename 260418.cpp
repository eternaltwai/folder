//#include <stdio.h>
//int main()
//{
//	char ch;
//	printf("A, B, C 키 중 하나를 누르고 Enter를 누르세요 : ");
//	scanf("%c", &ch);
//
//	switch (ch)
//	{
//	case 'a':
//	case 'A':
//		printf("A 키를 눌렀습니다. \n");
//		break;
//	case 'b':
//	case 'B':
//		printf("B 키를 눌렀습니다. \n");
//		break;
//	case 'c':
//	case 'C':
//		printf("C 키를 눌렀습니다. \n");
//		break;
//	default: printf("잘못 눌렀습니다. \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = 'Z';
//
//	if (ch == 'a')
//		printf("A 출력 \n");
//	else if (ch == 'b')
//		printf("B 출력 \n");
//	else if (ch == 'c')
//		printf("C 출력 \n");
//	else
//		printf("모름 \n");
//}

//#include <stdio.h>
//int main()
//{
//	int a = 2;
//	switch (a)
//	{
//	case 1: printf("1이다");
//	case 2: printf("2다");
//	case 3: printf("3이다");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("정수를 입력하세요 : ");
//	scanf("%d", &num);
//
//	if (num % 3 == 0)
//		printf("3의 배수입니다.");
//	else
//		printf("3의 배수가 아닙니다.");
//}

//#include <stdio.h>
//int main()
//{
//	int age = 21;
//
//	switch (age / 10)
//	{
//	case 0: printf("어린이 \n");
//	case 1: printf("10대 \n");
//	case 2: printf("20대 \n");
//	case 3: printf("30대 \n");
//	case 4: printf("40대 \n");
//	default: printf("50대 이상 \n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int num = 100;
//
//	if (num != 100)
//		printf("100이 아니네요.\n");
//	printf("아쉽네요 \n");
//
//	printf("프로그램을 종료합니다\n");
//}

//#include <stdio.h>
//int main()
//{
//	char alp = 'A';
//	while (alp <= 'Z') {
//		/*if (alp == 'F') { alp++; }
//		printf("%c\n", alp);
//		alp++;*/
//		if (alp != 'F') 
//			printf("%c\n", alp);
//		alp++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
// {
//	int num = 0;
//	int add;
//	int player = 0;
//	while (1) {
//		printf("%c : ",'A'+ player);
//		scanf("%d", &add);
//		if (add > 3 || add < 1) {
//			printf("다시 입력해주세요.\n");
//			continue;
//		}
//		num = num + add;
//		printf("=> %d\n", num);
//		player = !player;
//		if (num >= 31) { break; }
//	}
//	printf("%c가 이겼습니다!", 'A' + player);
//	return 0;
//}