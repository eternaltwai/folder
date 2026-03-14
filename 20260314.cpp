//#include <stdio.h>
//
//void main()
//{
//	printf("%d", 100, 200);
//	printf("\n");
//	printf("%d %d", 100);
//	printf("\n");
//}

//#include <stdio.h>

//void main()
//{
//	printf("%d / %d = %d", 100, 200, 0.5);
//	printf("\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n안녕하세요\n\안녕하세요\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n");
//	printf("안녕하세요");
//	printf("안녕하세요\n");
//	return 0;
// }

//#include <stdio.h>
//
//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드: %d개\n", keyboard);
//	printf("마우스: %d개\n", mouse);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n", coin1, coin2, coin1 + coin2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char A;
//	A = 'A';
//	printf("A = %c, A = %d\n", A, A);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f.. \n", pi, e);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("Hello World!");
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//
//	scanf("%d", &a);
//	scanf("%d", &b);
//
//	printf("%d", a + b);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//
//	scanf("%d", &a);
//	scanf("%d", &b);
//
//	printf("%d", a - b);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//
//	scanf("%d", &a);
//	scanf("%d", &b);
//
//	printf("%d", a * b);
//}

//#include <stdio.h>
//
//int main()
//{
//	double pi;
//	pi = 3.14;
//	int r;
//	r = 5;
//	double cir = r * r * pi;
//	double ext = 2 * pi * r;
//		printf("원의 넓이는 %.1f.. \n원의 둘레는 %.1f..\n", cir, ext);
//}

//#include <stdio.h>
//
//int main()
//{
//	int w1 = 3;
//	int w2 = 5;
//	int h = 7;
//	int ext = (w1 + w2) * h / 2;
//		printf("사다리꼴의 넓이는 %d", ext);
//}

//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d", &k);
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x);
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 두 개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double pi;
//	pi = 3.14;
//	int r;
//	printf("반지름의 길이를 입력하세요 : ");
//	scanf("%d", &r);
//	double cir = r * r * pi;
//	double ext = 2 * pi * r;
//	printf("원의 넓이는 %.2f.. 원의 둘레는 %.2f..", cir, ext);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int w1, w2, h;
//	printf("밑변, 윗변, 높이 순으로 값을 적어주세요 : ");
//	scanf("%d%d%d", &w1, &w2, &h);
//	double ext = (w1 + w2) * h / 2.0;
//	printf("사다리꼴의 넓이는 : %.1f\n", ext);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2;		 printf("%2d\n", number);
//	number--;			 printf("%2d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	printf("숫자 2개를 적어주세요 : ");
//	scanf("%d%d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d = number1%%4\n", number1 % 4);
//	printf("%d = number2%%3\n", number2 % 3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//	
//	return 0;
//}

#include <stdio.h>

int main()
{
	int number2;
	printf("숫자를 입력해주세요 : ");
	scanf("%d", &number2);
	int number = number2 % 50;
	printf("%d = %d%%50\n", number, number2);
	return 0;
}