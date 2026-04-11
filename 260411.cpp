//#include <stdio.h>
//
//int main()
//{
//	int count = 6;
//
//	while (count > 0)
//	{
//		printf("C\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = -10;
//
//	while (count <= 0)
//	{
//		printf("%d\n", count);
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//
//	while (count <= 100)
//	{
//	/*	if (count % 5 == 0)
//		{
//			printf("%d\n", count);
//		}
//		count++;*/
//
//		printf("%d\n", count);
//		count += 5;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int H, M;
//	scanf("%d %d", &H, &M);
//
//	H = H * 60;
//	int m = H + M + 24 * 60;
//	
//	m -= 45;
//
//	int h = m / 60;
//
//	int y = h / 24;
//	h = h % 24;
//
//	int m2 = m % 60;
//	printf("%d %d", h, m2);
//}

//#include <stdio.h>
//int main()
//{
//	int A, B, C;
//	scanf("%d %d", &A, &B);
//	scanf("%d", &C);
//
//	A = A * 60;
//	int m = A + B + C + 24 * 60;
//	
//	int h = m / 60;
//
//	int y = h / 24;
//	h = h % 24;
//
//	int m2 = m % 60;
//	printf("%d %d", h, m2);
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char alphabet;
//	while (1) {
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시 입력): ");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else { continue; }
//		printf("입력한 값 : %c\n", alphabet);
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, total = 0;
//	while (1) {
//		printf("양수를 입력해주세요(0입력시 종료): ");
//		scanf("%d", &number);
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number, multi;
//	number = 1;
//	multi = 1;
//	while (1)
//	{
//		multi = number * multi;
//		if (multi > 50000) { break; }
//		number++;
//	}
//	printf("%d\n", number);
//	return 0;
//}

#include <stdio.h>
int main()
{
	char alphabet;
	alphabet = 0x65;
	while (1) {
		printf("%c", alphabet);
		alphabet++;
		if (alphabet == 0x71) { continue; }
		else if (alphabet == 0x91) { break; }
	}
	
}