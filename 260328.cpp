//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0) {
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0) {
//		printf("number는 음수입니다.\n");
//	}
//	else {
//		printf("number는 0입니다");
//	}
//	if (number % 2 == 0) {
//		printf("number는 짝수입니다.\n");
//	}
//	else {
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char wasd;
//	printf("키를 입력해주세요.\n");
//	scanf("%c", &wasd);
//	if (wasd == 'w') {
//		printf("위 방향키를 입력하셨습니다.");
//	}
//	else if (wasd == 'a') {
//		printf("좌 방향키를 입력하셨습니다.");
//	}
//	else if (wasd == 'd') {
//		printf("우 방향키를 입력하셨습니다.");
//	}
//	else if (wasd == 's') {
//		printf("아래 방향키를 입력하셨습니다.");
//	}
//	else {
//		printf("다른 키를 입력하셨습니다.");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int gauge;
//	scanf("%d", &gauge);
//	if (gauge <= 55 && gauge >= 45) {
//		printf("\"Perfect\"");
//	}
//	else if (gauge <= 65 && gauge >= 35) {
//		printf("\"Excellent\"");
//	}
//	else {
//		printf("\"good\"");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int input;
//	printf("숫자를 입력해주세요.\n");
//	scanf("%d", &input);
//	if (input % 3 == 0) {
//		printf("\'이 숫자는 3의 배수입니다.\' \n");
//		if (input % 6 == 0) {
//			printf("\'이 숫자는 6의 배수입니다.\' \n");
//		}
//		if (input % 9 == 0) {
//			printf("\'이 숫자는 9의 배수입니다.\' \n");
//		}
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//
//	switch (command)
//	{
//	case'i':
//			printf("아이템창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요: ");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//	case 'm':	printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//		break;
//	case 'm':	printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요: ");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//		break;
//	case 'm':	printf("지도창 오픈\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n");	break;
//	case 2: printf("two\n");	break;
//	case 3: printf("three\n");	break;
//	}
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("숫자 두개를 입력해주세요.\n");
//	scanf("%d %d", &input1, &input2);
//	printf("기호를 입력해주세요.\n");
//	scanf(" %c", &oper);
//	switch (oper)
//	{
//	case '+': printf("%d + %d = %d", input1, input2, input1 + input2);	break;
//	case '-': printf("%d - %d = %d", input1, input2, input1 - input2);	break;
//	case '*': printf("%d * %d = %d", input1, input2, input1 * input2);	break;
//	case '/': printf("%d / %d = %d", input1, input2, input1 / input2);	break;
//	case '%': printf("%d %% %d = %d", input1, input2, input1 % input2);	break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int month;
//	printf("달을 입력해주세요.\n");
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1: printf("1 > January");	break;
//	case 2: printf("2 > February");	break;
//	case 3: printf("3 > March");	break;
//	case 4: printf("4 > April");	break;
//	case 5: printf("5 > May");	break;
//	case 6: printf("6 > June");	break;
//	case 7: printf("7 > July");	break;
//	case 8: printf("8 > August");	break;
//	case 9: printf("9 > September");	break;
//	case 10: printf("10 > October");	break;
//	case 11: printf("11 > November");	break;
//	case 12: printf("12 > December");	break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'x';
//
//	switch (command)
//	{
//	case 'x':	printf("알파벳 x 입력.\n");
//		break;
//	case 'x':	printf("엑스표 입력.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'x';
//
//	switch (command)
//	{
//	case 'x':	printf("알파벳 x 입력.\n");
//		break;
//	case 'X':	printf("엑스표 입력.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//	{
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2:
//	{
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	return 0;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽 이동\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>': case 'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	int option = 3;
//	printf("메뉴를 선택하세요.\n");
//	printf("1. 새 게임\n2. 이어하기\n3. 옵션\n");
//	scanf("%d", input);
//
//	switch (input)
//	{
//	case 1 :
//		printf("새 게임 시작.\n");
//		break;
//	case 2 :
//		printf("세이브 데이터 로드.\n");
//		break;
//	case option :
//		printf("옵션 세팅.\n");
//		break;
//	default :
//		printf("지정된 기능이 없습니다.\n");
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	const int option = 3;
//	printf("메뉴를 선택하세요.\n");
//	printf("1. 새 게임\n2. 이어하기\n3. 옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드.\n");
//		break;
//	case option :
//		printf("옵션 세팅.\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("0~9까지의 숫자를 입력해주세요.\n");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3: case 6: case 9:
//		printf("짝");
//		break;
//	default:
//		printf("%d",number);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char wasd;
//	printf("키를 입력해주세요.\n");
//	scanf("%c", &wasd);
//	switch (wasd)
//	{
//	case 'w' :
//		printf("위 방향키를 입력하셨습니다.\n");
//		break;
//	case 'a':
//		printf("좌 방향키를 입력하셨습니다.\n");
//		break;
//	case 's':
//		printf("아래 방향키를 입력하셨습니다.\n");
//		break;
//	case 'd':
//		printf("우 방향키를 입력하셨습니다.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int appetizer, mainDish, dessert;
//	printf("주문할 음식을 선택해주세요.\n");
//	printf("appetizer 1. 캐비어 2. 샐러드 3. 푸아그라\nmainDish 1. 스테이크 2. 생선요리 3. 양갈비\ndessert 1. 케이크 2. 아이스크림 3. 초콜릿무스\n");
//	scanf("%d %d %d", &appetizer, &mainDish, &dessert);
//	switch (appetizer)
//	{
//	case 1 :
//		printf("주문한 음식은 캐비어, ");
//		break;
//	case 2 :
//		printf("주문한 음식은 샐러드, ");
//		break;
//	case 3 :
//		printf("주문한 음식은 푸아그라, ");
//		break;
//	}
//	switch (mainDish)
//	{
//	case 1:
//		printf("스테이크, ");
//		break;
//	case 2:
//		printf("생선요리, ");
//		break;
//	case 3:
//		printf("양갈비, ");
//		break;
//	}
//	switch (dessert)
//	{
//	case 1:
//		printf("케이크 입니다.");
//		break;
//	case 2:
//		printf("아이스크림 입니다.");
//		break;
//	case 3:
//		printf("초콜릿무스 입니다.");
//		break;
//	}
// return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x) ", i, i);
//
//		if (i >= 70 && i < 80) { i++;  continue;  }
//
//		if (i % 10 == 9)	printf("\n");
//		if (i == 93)	break;
//		i++;
// 	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//
//		continue; break;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	while (0)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 0;
//
//	while (count < 3)
//
//	{
//		printf("현재 count: %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 3;
//
//	while (count > 0)
//	{
//		printf("현재 count : %d\n");
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int count = 6;

	while (count < 0)
	{
		printf("C");
		count--;
	}
	return 0;
}