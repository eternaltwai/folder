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
////	printf("100���� 200������ ��: %d \n", hap);
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
////		printf("���� �µ� : %d��\n", temperature);
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
////		printf("\n�޴��� �����ϼ���.\n");
////		printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ� (0:��������)\n");
////		scanf("%d", &input);
////
////		switch (input) {
////		case NEWGAME:
////			printf("�� ���� ����\n");
////			break;
////		case LOADGAME:
////			printf("���̺� ������ �ε�\n");
////			break;
////		case OPTION:
////			printf("�ɼ� ����\n");
////			break;
////		}
////	} while (input != GAMEOVER);
////
////	printf("������ �����մϴ�.\n");
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
////		printf("1. �α���\n2. ȸ������\n3. �ɼ�\n4. ���� �����?n");
////		scanf("%d", &select);
////
////		switch (select) {
////		case LOGIN:
////			printf("���̵� �Է����ּ���.\n");
////			break;
////		case SIGNIN:
////			printf("���� ���� ���̵� �Է����ּ���.\n");
////			break;
////		case OPTION:
////			printf("������ �ɼ��� �������ּ���.\n");
////			break;
////		case MAKER:
////			printf("���� �����?\n");
////			break;
////		}
////	} while (select >= 1 && select <= 4);
////		printf("�����մϴ�.\n");
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
//		printf("\n%d���� �� !\n", ++day);
//		printf("���õ� �� �ұ��?\n");
//		pritnf("1. �ڵ� �����Ѵ�.\n");
//		printf("�׿�. ������.\n >>");
//		scanf("%d", command);
//		if (command != 1)break;
//		int randInt = rand() % 5 + 1;
//
//		switch (randInt) {
//		case 1:
//			printf("�����?���׿�.\n");
//		case 3:
//			printf("����������. ");
//		case 2:
//			printf("�����?������.\n");
//		case 4:
//			printf("ī�信�� ");
//			break;
//		case 5:
//			printf("�п�����  ");
//		}
//		printf("�ڵ� �����մϴ�.\n");
//		study++;
//	} while (1);
//		if (day <= 3) {
//			printf("�״���Դϴ�?..\n");
//		}
//		else {
//			int level = study / 8;
//			switch (level) {
//				
//			case 0:
//				printf("�ڵ������� �Ǿ����ϴ�.!\n");
//				break;
//			case 1:
//				printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n");
//				break;
//			case 2:
//				printf("FrontEnd �����ڰ� �Ǿ����ϴ�.!\n");
//				break;
//			case 3:
//				printf("BackEnd �����ڰ� �Ǿ����ϴ�.!\n");
//				break;
//			default:
//				printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
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
//	printf("100���� 200������ ��: %d \n", hap);
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
//		printf("���� �µ� : %d��\n", temperature);
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
//		printf("\n�޴��� �����ϼ���.\n");
//		printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ� (0:��������)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("�� ���� ����\n");
//			break;
//		case LOADGAME:
//			printf("���̺� ������ �ε�\n");
//			break;
//		case OPTION:
//			printf("�ɼ� ����\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("������ �����մϴ�.\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int select;
//	enum {LOGIN, SIGNIN, OPTION, MAKER};
//	do {
//		printf("1. �α���\n2. ȸ������\n3. �ɼ�\n4. ���� �����?n");
//		scanf("%d", &select);
//
//		switch (select) {
//		case LOGIN:
//			printf("���̵� �Է����ּ���.\n");
//			break;
//		case SIGNIN:
//			printf("���� ���� ���̵� �Է����ּ���.\n");
//			break;
//		case OPTION:
//			printf("������ �ɼ��� �������ּ���.\n");
//			break;
//		case MAKER:
//			printf("���� �����?\n");
//			break;
//		}
//	} while (select >= 1 && select <= 4);
//		printf("�����մϴ�.\n");
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
//		printf("\n--- %d��° �� ---\n", ++day);
//
//		if (rest > 0) {
//			rest--;
//		}
//		printf("1. �ڵ� ���θ� �Ѵ�.\n");
//		printf("2. ������ �ϸ� �ð��� ������.\n");
//		printf("3. �������?������ ������.\n");
//		printf("4. ������ �޽��� ���Ѵ�.\n");
//		printf("�׿�. ���α׷��� �����Ѵ�.\n >> ");
//		scanf("%d", &command);
//
//		if (command > 4 || command < 1) break;
//		int randInt = rand() % 5 + 1;
//		int randInt2 = rand() % 3 + 1;
//
//		if (command == 1) {
//			switch (randInt) {
//			case 1:
//				printf("�������?���� ���·�, ");
//			case 3:
//				printf("������ ���������� ");
//				break;
//			case 2:
//				printf("���� �ǰ��� ���¿�����, ");
//			case 4:
//				printf("��ó ī�信�� ");
//				break;
//			case 5:
//				printf("���� �п����� ");
//			}
//			printf("�ڵ� ���θ� ������ �����߽��ϴ�.\n");
//			study++;
//		}
//		else if (command == 2) {
//			switch (randInt) {
//			case 1:
//				printf("�������?���� ���·�, ");
//			case 3:
//				printf("ȭ���� ������ PC�濡�� ");
//				break;
//			case 2:
//				printf("���� �ǰ��� ���¿�����, ");
//			case 4:
//				printf("���� e������ ����忡��?");
//				break;
//			case 5:
//				printf("�����ϰ� ������ ");
//				break;
//			}
//			printf("������ �ϸ� ��Ʈ������ Ǯ�����ϴ�.\n");
//			game++;
//		}
//		else if (command == 3) {
//			switch (randInt) {
//			case 1:
//				printf("�������?���� ���·�, ");
//			case 3:
//				printf("������ ���� ����ž �ٿ��� ");
//				break;
//			case 2:
//				printf("���� �ǰ��� ���¿�����, ");
//			case 4:
//				printf("������ �����̴� ���÷��̽����� ");
//				break;
//			case 5:
//				printf("�ƴ��� Ŀ�´�Ƽ ���������?");
//				break;
//			}
//			printf("���ε��?���� ��ſ�?�ð��� ���½��ϴ�.\n");
//			meet++;
//		}
//		else if (command == 4) {
//			switch (randInt2) {
//			case 1:
//				printf("�ȸ����ڰ� �ִ� ������ ����ī�信�� ");
//				break;
//			case 2:
//				printf("Ǫ���� �ܵ� �� �Ѱ��������� ");
//				break;
//			case 3:
//				printf("���� �ִ� ħ�뿡�� ");
//				break;
//			}
//			printf("�����?�޽��� ���ϸ� �Ƿθ� ȸ���߽��ϴ�.\n");
//			rest += 3;
//		}
//	} while (1);
//
//	printf("\n============================================\n");
//	printf("                   ���?             \n");
//	printf("============================================\n");
//	if (day <= 7) {
//		printf("���ٸ� Ȱ���� ���� ���� ä ª�� �ð��� �귯�����ϴ�.\n");
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
//					printf("���� ������ �� �� �ڵ� �Թ��ڰ� �Ǿ����ϴ�.\n"); break;
//				case 1:
//					printf("������ ������ ���α׷��� �����?�ִϾ� �����ڰ� �Ǿ����ϴ�.\n"); break;
//				case 2:
//					printf("�����?ȭ���� ���������� �����ϴ� �� ����Ʈ���� �����ڰ� �Ǿ����ϴ�.\n"); break;
//				case 3:
//					printf("������ �����ͺ��̽��� ���������� �����ϴ� �鿣�� �����ڰ� �Ǿ����ϴ�.\n"); break;
//				default:
//					printf("���?�ý����� ���踦 �Ѱ��ϴ� ���� ����Ʈ���� �����Ͼ �Ǿ����ϴ�.\n"); break;
//				}
//			}
//
//			else if (level > code && level >= people) {
//				switch (level) {
//				case 0:
//					printf("���� ��̷�?������ ���� �Ϲ� ����ڰ�?�Ǿ����ϴ�.\n"); break;
//				case 1:
//					printf("�ֺ� ���ε� ���̿��� �����?�Ƿ��ڷ� �����ް� �Ǿ����ϴ�.\n"); break;
//				case 2:
//					printf("Ŀ�´�Ƽ�� ���� ������ �̸��� �˷��� ������ �Ǿ����ϴ�.\n"); break;
//				case 3:
//					printf("���� ���� ������ ���տ� �� �ֻ����� ��Ŀ�� �Ǿ����ϴ�.\n"); break;
//				default:
//					printf("���� ��ȸ���� Ȱ���ϴ� ���� ���ΰ��̸Ӱ� �Ǿ����ϴ�.\n"); break;
//				}
//			}
//			else if (people > code && people > level) {
//				switch (people) {
//				case 0:
//					printf("�ֺ��� ������ �´� �Ҽ��� ���� ģ������ �ΰ� �Ǿ����ϴ�.\n"); break;
//				case 1:
//					printf("������ ���ΰ��踦 �����ϸ� ���� ������ ��;����ϴ�?\n"); break;
//				case 2:
//					printf("���� �θ��� �������� ��ȸ���� �������?���� �ι��� �Ǿ����ϴ�.\n"); break;
//				case 3:
//					printf("Ź���� ���� �ɷ��� �����ϴ� ���� �ܱ����� �Ǿ����ϴ�.\n"); break;
//				default:
//					printf("���� �������?�ŷڿ� ������ �޴� ��ġ���� �Ǿ����ϴ�.\n"); break;
//				}
//			}
//		}
//		else {
//			printf("�����?�������� ���� ������ ����ġ�� �����ϸ� ��ƿԽ��ϴ�?\n");
//			printf("���������?������ �Ƿ� ������ �ǰ��� ũ�� ��ġ�� ���ҽ��ϴ�.\n");
//			printf("���ϴ� ��ǥ�� �̷��?�͵� �߿�������, ���δ� ������ �޽��� �ݵ��?�ʿ��մϴ�.\n");
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
//		printf("�� %d����\n", sheep);
//	}
//	printf("������.\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("�� %d����\n", sheep);
//		if (sheep == 3) {
//			printf("���߿� ������.\n");
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
//			printf("���Ƽ� ���� ���� ���ߴ�.\n");
//			continue;
//		}
//		printf("�� %d����\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("�� %d����\n", sheep);
//	}
//	printf("������.\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("���� ���Ҵ�.\n");
//			continue;
//		}
//		else if (sheep == 45) {
//			printf("���߿� ������.\n");
//			break;
//		}
//		printf("�� %d����\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("���� %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 1; round <= 10; round++)
//	{
//		printf("���� %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("����Ʈ %d��\n", count);
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
//	printf("���� %d\n", sum_number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("�ݺ��� Ƚ���� �Է��ϼ��� :");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("�߾�\n");
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
//	printf("���ڵ��� ���� ��: %d\n", sum);
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
//	printf("100 ������ �������� ����մϴ�?\n");
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
//	printf("100���� 7�� �����?����մϴ�?\n");
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
//	printf("1���� 10���� ���� �� ���?: ");
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
//	printf("1���� 10���� ���� �� ���?: ");
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
//	printf("1�� 1��\n");
//	printf("1�� 2��\n");
//	printf("1�� 3��\n");
//	printf("2�� 1��\n");
//	printf("2�� 2��\n");
//	printf("2�� 3��\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d�� %d��\n", myClass, student);
//	}
//
//	myClass++;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d�� %d��\n", myClass, student);
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
//			printf("%d�� %d��\n", myClass, student);
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
//			printf("%d�� %d��\n", myClass, student);
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
//				printf("%d�г� %d�� %d�� \n", grade, myClass, student);
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
//			printf("4�� - %d, 6�� - %d\n", dice, secdice);
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
//		printf("%d��° ���� �ݺ��� ����\n", outer);
//
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("���� �ݺ��� %d�� �ݺ�\n", inter);
//		}
//		printf("%d��° ���� �ݺ��� Ż��\n", outer);
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

//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//
//	int xvar = LINE;
//	int yvar = 1;
//	int count = 1;
//	int z = 1;
//
//	for (; yvar >= 0;) {
//		for (int x = xvar; x >= 1; x--) {
//			printf(" ");
//		}
//		for (int y = 1; y <= yvar; y++) {
//			printf("*");
//		}
//		printf("\n");
//		xvar -= z;
//		yvar += 2 * z;
//
//		if (xvar == 0) {
//
//			z = -z;
//
//			xvar -= z;
//			yvar += 2 * z;
//		}
//		count++;
//	}
//	return 0;


		/*a = 1;
		n += a;
		a = -a;
		n += a;*/
//}

//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//
//	scanf("%d", &LINE);
//	int xvar = LINE;
//	int yvar = 1;
//
//	for (int loop = 1; loop <= LINE; loop++) {
//		for (int x = xvar; x >= 1; x--) {
//			printf(" ");
//		}
//		for (int y = 1; y <= yvar; y++) {
//			printf("%d", yvar);
//		}
//		printf("\n");
//		xvar--;
//		yvar++;
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	int player = 0;
//	int num = 1;
//
//	printf("<����Ų ���?31!>\n");
//	printf("������ �����մϴ�! 31�� ���ϴ� �����?���Ե˴ϴ�. (0 �Է½� �ϳѱ�)\n");
//	for (;;) {
//		
//		for (int x = 1; x <= 3; x++) {
//			printf("%c : ", 'A' + player);
//			scanf("%d", &input);
//
//			if (num != input) {
//				if (input == 0) {
//					if (x == 1) {
//						printf("���� �ѱ��?���ؼ��� �ϳ� �̻��� ���� ���ؾ� �մϴ�.\n");
//						x--;
//						continue;
//					}
//					break;
//				}
//
//				printf("�߸��� �Է��Դϴ�.\n");
//				printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", num);
//				x--;
//				continue;
//			}
//
//			num++;
//			if (input >= 31) {
//				break;
//			}
//		}
//		player = !player;
//		if (input >= 31) {
//			break;
//		}
//		printf("���� �Ѿ�ϴ�.\n");
//	}
//			
//	printf("���� %c�� �¸��Դϴ�!\n", 'A' + player);
//}

//#include <stdio.h>
//int main()
//{
//	float conversion = 0;
//	while (conversion < 2)
//	{
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float conversion = 0;
//	for (conversion < 2) {
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	for (double conversion = 90; conversion > 0.1; conversion /= 3)
//	{
//		if (conversion == 10.0)
//		{
//			continue;
//		}
//		printf("%.31f\n", conversion);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double conversion = 90;
//	while (conversion > 0.1)
//	{
//		if (conversion == 10.0)
//		{
//			conversion /= 3;
//			continue;
//		
//		}
//		printf("%.31f\n", conversion);
//		conversion /= 3;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	while (1) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("���α׷� ����\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for (;;) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("���α׷� ����\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int for_flag = 1; // 1
//	int number = 0; // 2
//	for (; for_flag; ) { // 3 8
//		printf("number = %d\n", number); // 4 9 
//		for (; number++ ;) // 5 10 
//		{
//			printf(">>umber = %d\n", number); // 11
//			if (number == 3) { // 12
//				for_flag = 0; // 13
//				break; // 14
//			}
//		}
//		number++; // 6 15
//		printf(">>number = %d\n", number); // 7 16
//	}
//	printf("%d %d\n", for_flag, number); // 17
//	return 0; // 18
//}

//#include <iostream>
//void main()
//{
//	int number, count;
//	std::cin >> number >> count;
//
//	std::cout << "new : " << " " << count << std::endl;
//}

//#include <iostream>
//#include <bitset>
//using namespace std;
//void main()
//{
//	char a = 77;
//	char b = 8;
//	cout << bitset<8>(a) << "->" << (int)a << endl;
//	cout << bitset<8>(a) << "->" << (int)b << endl;
//
//	cout <<"AND : " << bitset<8>(a&b) << endl;
//	cout << "OR : " << bitset<8>(a|b) << endl;
//	cout << "XOR : " << bitset<8>(a^b) << endl;
//	cout << "NOT : " << bitset<8>(~a) << endl;
//	cout << "& : " << bitset<8>(a^a&b) << endl;
//}

//#include <iostream>
//#include <bitset>
//using namespace std;
//void main()
//{
//	char a = -1;
//	char b = a >> 5;
//	char c = 127 >> 1;
//
//	printf("%x (%d)\n", a, a);
//	printf("%x (%d)\n", a, b);
//	printf("%x %x\n\n", 127, c);
//
//	char d = 1 << 1;
//	char e = 1 << 4;
//	char f = 1 << 7;
//
//	printf("%x (%d)\n", d, d);
//	printf("%x (%d)\n", e, e);
//	printf("%x (%d)\n", f, f);
//}

//#include <stdio.h>
//void main()
//{
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//}

//#include <stdio.h>
//void main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}

//#include <stdio.h>
//void main()
//{
//	char alpah[4] = { 'a', 'b','c','d' };
//	printf("%c%c%c%c\n", alpah[0], alpah[1], alpah[2], alpah[3]);
//}

//#include <stdio.h>
//void main()
//{
//	int num[3] = { 3,6,9 };
//	printf("num�� �ȿ� ����ִ�?);
//	printf(" 1��° ���ڴ�? : %d\n", num[1]);
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	int num[3] = { 3,6,9 };
//	cout << "num�� �ȿ� ����ִ�?1��° ���ڴ� ? : " << num[1] << endl;
//}

//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	printf("%d��°�� %d ����\n", 0, num[0]);
//	printf("%d��°�� %d ����\n", 1, num[1]);
//	printf("%d��°�� %d ����\n", 2, num[2]);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	int k = 0;
//	printf("%d��°�� %d ����\n", k, num[k]); k++;
//	printf("%d��°�� %d ����\n", k, num[k]); k++;
//	printf("%d��°�� %d ����\n", k, num[k]); k++;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	for (int k = 0; k < 3; k++) {
//		printf("%d��°�� %d ����\n", k, num[k]);
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> arr[i];
//		cout << arr[i] << endl;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5];
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}	
//	printf("\n\n");
//	for (int a = 0; a < 5; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int a;
//	int flag = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("���� %d�� �Է��ϴ� ĭ�Դϴ�. : ", i+1);
//		scanf("%d", &arr[i]);
//	}
//
//	for (;;) {
//
//		printf("�Է��Ͻ� ���� �����ּ���. : ");
//		scanf("%d", &a);
//
//
//		for (int i = 0; i < 10; i++)
//		{
//			if (a == arr[i])
//			{
//				flag = 1;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			printf("exist");
//			break;
//		}
//	}
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int one, two;
//	int max = 0;
//	cin >> one >> two;
//	if (one > two)max = one;
//	else max = two;
//	cout << "max = " << max << endl;
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//
//	if (one < two) {
//		if (one > three) max = one;
//		else max = three;
//	}
//	else {
//		if (two < three)max = two;
//		else max = three;
//	}
//	cout << "max = " << max << endl;sk
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int a[3] = { 1,3,2 };
//	int max = a[0];
//	for (int i = 1; i < 3; i++) {
//		if (max < a[i])
//			max = a[i];
//	}
//	cout << "max = " << max << endl;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a[5] = { 1,3,6,4,2 };
//	int max = a[0];
//	int min = a[0];
//	int sum = a[0];
//
//	for (int i = 1; i < 5; i++)
//	{
//		if (a[i] < min)
//			min = a[i];
//		
//		if (a[i] > max)
//			max = a[i];
//
//		sum += a[i];
//	}
//	
//	double average = sum / 5;
//
//	cout << "�ּڰ� : " << min << endl;
//	cout << "�ִ밪 : " << max << endl;
//	cout << "���� : " << sum << endl;
//	cout << "��� : " << average << endl;
//
//}

//#include <iostream>
//using namespace std;
///* 1��/�� ���� Ƚ�� : 3
//*  2��/�� ���� Ƚ�� : 1
//*  3��/�� ���� Ƚ�� : 2
//*  4��/�� ���� Ƚ�� : 2
//*  5��/�� ���� Ƚ�� : 1
//*  6��/�� ���� Ƚ�� : 1
//*/
//int main()
//{
//	int a[10] = { 1,1,4,5,6,2,3,3,4,1 };
//	int sum[7] = {};
//	for (int i = 0; i < 10; i++)
//	{
//		sum[a[i]]++;
//	}
//	for (int i = 1; i <= 6; i++) {
//		cout << i << "��/�� ���� Ƚ�� : " << sum[i] << endl;
//	}
//
//		//printf("%d��/�� ���� Ƚ�� : %d\n", count, sum);
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	cout << "left = " << left << ",";
//	cout << "right = " << right << endl;
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	cout << "left = " << left << ", ";
//	cout << "right = " << right << endl;
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int num[2] = { 10,3 };
//	int temp;
//
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//
//	cout << "num[0] = " << num[0] << ", ";
//	cout << "num[1] = " << num[1] << endl;
//}

#include <iostream>
using namespace std;

void main()
{
	int num[4] = { 4,3,1,2 };
	int temp;

	temp = num[0];
	num[0] = num[2];
	num[1] = num[3];
	num[2] = num[2];
	num[3] = temp;

	cout << "num[0] = " << num[0] << ", ";
	cout << "num[1] = " << num[1] << ", ";
	cout << "num[2] = " << num[2] << ", ";
	cout << "num[3] = " << num[3] << endl;
}