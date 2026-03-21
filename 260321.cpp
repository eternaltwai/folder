//#include <stdio.h>
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d =6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d =6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d =6/4\n", data3);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1 / number2);
//	printf("%d%d\n", number1, number2);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);//27600
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개, ", coin10000);
//	printf("오천원권 %d개, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다.");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int money;
//	printf("가격을 입력해주세요(원)");
//	scanf("%d", &money);
//	money = 1000 - money;
//	int left500 = money / 500;
//	money = money % 500;
//	int left100 = money / 100;
//	money = money % 100;
//	int left50 = money / 50;
//	money = money % 50;
//	int left10 = money / 10;
//	money = money % 10;
//	printf("500원짜리 동전 %d개, ", left500);
//	printf("100원짜리 동전 %d개, ", left100);
//	printf("50원짜리 동전 %d개, ", left50);
//	printf("10원짜리 동전 %d개, ", left10);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int randint = rand() % 10;
//	int nextint = rand() % 10;
//	printf("첫숫자 : %d\n", randint);
//	printf("다음숫자 : %d\n", nextint);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(null));
//	int randint = rand() % 10;
//	int nextint = rand() % 10;
//	int afterint = rand() % 10 + 50;
//	printf("첫숫자 : %d\n", randint);
//	printf("다음숫자 : %d\n", nextint);//0~9
//	printf("그다음숫자 : %d", afterint);//50~59
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(null));
//	printf("내 주머니에 있는 돈은");
//	int mymoney = (rand() % 10 + 1) * 1000; //1000~10000
//	printf("%d원이다.\n", mymoney);
//	int coin500 = rand() % 4 * 500; //0~1500
//	int coin100 = rand() % 5000; //0~4999
//	coin100 = coin100 / 100 * 100; //0~4900
//	printf("그리고 과자의 가격은");
//	printf(" %d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple)//apple이 0이 아니면 실행
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple) //apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else
//	{
//		printf("apple은 0개가 아닙니다");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input;
//	printf("정수를 입력해주세요.\n");
//	scanf("%d", &input);
//
//	if (input < 0)
//	{
//		printf("이 정수는 음수입니다");
//	}
//	else if (input == 0)
//	{
//		printf("이 정수는 0입니다.");
//	}
//	else
//	{
//		printf("이 정수는 양수입니다");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input;
//	printf("정수를 입력해주세요.\n");
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99)
//	{
//		printf("이 정수는 두자리 숫자입니다");
//	}
//	else
//	{
//		printf("이 정수는 두자리 숫자가 아닙니다");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자 1이 숫자 2보다 큽니다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자 2가 숫자 1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자 1과 숫자 2가 같습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if (score > 90) {
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80){
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70) {
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60) {
//		printf("성적은 D등급입니다.\n");
//	}
//	else {
//		printf("성적은 F등급입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int y_age;
//	printf("나이를 입력해주세요.\n");
//	scanf("%d", &y_age);

	/*if (y_age > 15) {
		printf("15세, 12세, 전체 관람가 시청 가능합니다");
	}
	else if (y_age > 12) {
		printf("12세, 전체 관람가 시청 가능합니다");
	}
	else {
		printf("전체 관람가 시청 가능합니다");
	}*/

//	if (y_age > 15) {
//		printf("15세 관람가, ");
//	}
//	if (y_age > 12) {
//		printf("12세 관람가, ");
//	}
//	if (y_age > 0) {
//		printf("전체 관람가 시청 가능합니다");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char intital;
//	printf("문자를 입력해주세요.\n");
//	scanf("%c", &intital);
//	if (intital >= 65 && intital <= 'Z') {
//		printf("%c의 소문자는 %c입니다.\n", intital, intital + 32);
//	}
//	else if (intital >= 0x61 && intital <= 0x7a) {
//		printf("%c의 대문자는 %c입니다.\n", intital, intital - 32);
//	}
//	return 0;
//}