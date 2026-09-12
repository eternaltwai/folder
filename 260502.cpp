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
////	printf("100ï¿½ï¿½ï¿½ï¿½ 200ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½: %d \n", hap);
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
////		printf("ï¿½ï¿½ï¿½ï¿½ ï¿½Âµï¿½ : %dï¿½ï¿½\n", temperature);
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
////		printf("\nï¿½Þ´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï¼ï¿½ï¿½ï¿½.\n");
////		printf("1.ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ 2.ï¿½Ì¾ï¿½ï¿½Ï±ï¿½ 3.ï¿½É¼ï¿½ (0:ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½)\n");
////		scanf("%d", &input);
////
////		switch (input) {
////		case NEWGAME:
////			printf("ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½\n");
////			break;
////		case LOADGAME:
////			printf("ï¿½ï¿½ï¿½Ìºï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Îµï¿½\n");
////			break;
////		case OPTION:
////			printf("ï¿½É¼ï¿½ ï¿½ï¿½ï¿½ï¿½\n");
////			break;
////		}
////	} while (input != GAMEOVER);
////
////	printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Õ´Ï´ï¿½.\n");
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
////		printf("1. ï¿½Î±ï¿½ï¿½ï¿½\n2. È¸ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½\n3. ï¿½É¼ï¿½\n4. ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿?n");
////		scanf("%d", &select);
////
////		switch (select) {
////		case LOGIN:
////			printf("ï¿½ï¿½ï¿½Ìµï¿½ ï¿½Ô·ï¿½ï¿½ï¿½ï¿½Ö¼ï¿½ï¿½ï¿½.\n");
////			break;
////		case SIGNIN:
////			printf("ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Ìµï¿½ ï¿½Ô·ï¿½ï¿½ï¿½ï¿½Ö¼ï¿½ï¿½ï¿½.\n");
////			break;
////		case OPTION:
////			printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½É¼ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ö¼ï¿½ï¿½ï¿½.\n");
////			break;
////		case MAKER:
////			printf("ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿?\n");
////			break;
////		}
////	} while (select >= 1 && select <= 4);
////		printf("ï¿½ï¿½ï¿½ï¿½ï¿½Õ´Ï´ï¿½.\n");
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
//		printf("\n%dï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ !\n", ++day);
//		printf("ï¿½ï¿½ï¿½Ãµï¿½ ï¿½ï¿½ ï¿½Ò±ï¿½ï¿?\n");
//		pritnf("1. ï¿½Úµï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ñ´ï¿½.\n");
//		printf("ï¿½×¿ï¿½. ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½.\n >>");
//		scanf("%d", command);
//		if (command != 1)break;
//		int randInt = rand() % 5 + 1;
//
//		switch (randInt) {
//		case 1:
//			printf("ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½ï¿½ï¿½×¿ï¿½.\n");
//		case 3:
//			printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½. ");
//		case 2:
//			printf("ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½.\n");
//		case 4:
//			printf("Ä«ï¿½ä¿¡ï¿½ï¿½ ");
//			break;
//		case 5:
//			printf("ï¿½Ð¿ï¿½ï¿½ï¿½ï¿½ï¿½  ");
//		}
//		printf("ï¿½Úµï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Õ´Ï´ï¿½.\n");
//		study++;
//	} while (1);
//		if (day <= 3) {
//			printf("ï¿½×´ï¿½ï¿½ï¿½Ô´Ï´ï¿?..\n");
//		}
//		else {
//			int level = study / 8;
//			switch (level) {
//				
//			case 0:
//				printf("ï¿½Úµï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.!\n");
//				break;
//			case 1:
//				printf("ï¿½ï¿½ï¿½Î±×·ï¿½ï¿½Ó°ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.!\n");
//				break;
//			case 2:
//				printf("FrontEnd ï¿½ï¿½ï¿½ï¿½ï¿½Ú°ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.!\n");
//				break;
//			case 3:
//				printf("BackEnd ï¿½ï¿½ï¿½ï¿½ï¿½Ú°ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.!\n");
//				break;
//			default:
//				printf("Ç®ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ú°ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.!\n");
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
//	printf("100ï¿½ï¿½ï¿½ï¿½ 200ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½: %d \n", hap);
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
//		printf("ï¿½ï¿½ï¿½ï¿½ ï¿½Âµï¿½ : %dï¿½ï¿½\n", temperature);
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
//		printf("\nï¿½Þ´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï¼ï¿½ï¿½ï¿½.\n");
//		printf("1.ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ 2.ï¿½Ì¾ï¿½ï¿½Ï±ï¿½ 3.ï¿½É¼ï¿½ (0:ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½\n");
//			break;
//		case LOADGAME:
//			printf("ï¿½ï¿½ï¿½Ìºï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Îµï¿½\n");
//			break;
//		case OPTION:
//			printf("ï¿½É¼ï¿½ ï¿½ï¿½ï¿½ï¿½\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Õ´Ï´ï¿½.\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int select;
//	enum {LOGIN, SIGNIN, OPTION, MAKER};
//	do {
//		printf("1. ï¿½Î±ï¿½ï¿½ï¿½\n2. È¸ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½\n3. ï¿½É¼ï¿½\n4. ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿?n");
//		scanf("%d", &select);
//
//		switch (select) {
//		case LOGIN:
//			printf("ï¿½ï¿½ï¿½Ìµï¿½ ï¿½Ô·ï¿½ï¿½ï¿½ï¿½Ö¼ï¿½ï¿½ï¿½.\n");
//			break;
//		case SIGNIN:
//			printf("ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Ìµï¿½ ï¿½Ô·ï¿½ï¿½ï¿½ï¿½Ö¼ï¿½ï¿½ï¿½.\n");
//			break;
//		case OPTION:
//			printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½É¼ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ö¼ï¿½ï¿½ï¿½.\n");
//			break;
//		case MAKER:
//			printf("ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿?\n");
//			break;
//		}
//	} while (select >= 1 && select <= 4);
//		printf("ï¿½ï¿½ï¿½ï¿½ï¿½Õ´Ï´ï¿½.\n");
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
//		printf("\n--- %dï¿½ï¿½Â° ï¿½ï¿½ ---\n", ++day);
//
//		if (rest > 0) {
//			rest--;
//		}
//		printf("1. ï¿½Úµï¿½ ï¿½ï¿½ï¿½Î¸ï¿½ ï¿½Ñ´ï¿½.\n");
//		printf("2. ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ï¸ï¿½ ï¿½Ã°ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½.\n");
//		printf("3. ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½.\n");
//		printf("4. ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Þ½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Ñ´ï¿½.\n");
//		printf("ï¿½×¿ï¿½. ï¿½ï¿½ï¿½Î±×·ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ñ´ï¿½.\n >> ");
//		scanf("%d", &command);
//
//		if (command > 4 || command < 1) break;
//		int randInt = rand() % 5 + 1;
//		int randInt2 = rand() % 3 + 1;
//
//		if (command == 1) {
//			switch (randInt) {
//			case 1:
//				printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Â·ï¿½, ");
//			case 3:
//				printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ");
//				break;
//			case 2:
//				printf("ï¿½ï¿½ï¿½ï¿½ ï¿½Ç°ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Â¿ï¿½ï¿½ï¿½ï¿½ï¿½, ");
//			case 4:
//				printf("ï¿½ï¿½Ã³ Ä«ï¿½ä¿¡ï¿½ï¿½ ");
//				break;
//			case 5:
//				printf("ï¿½ï¿½ï¿½ï¿½ ï¿½Ð¿ï¿½ï¿½ï¿½ï¿½ï¿½ ");
//			}
//			printf("ï¿½Úµï¿½ ï¿½ï¿½ï¿½Î¸ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ß½ï¿½ï¿½Ï´ï¿½.\n");
//			study++;
//		}
//		else if (command == 2) {
//			switch (randInt) {
//			case 1:
//				printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Â·ï¿½, ");
//			case 3:
//				printf("È­ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ PCï¿½æ¿¡ï¿½ï¿½ ");
//				break;
//			case 2:
//				printf("ï¿½ï¿½ï¿½ï¿½ ï¿½Ç°ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Â¿ï¿½ï¿½ï¿½ï¿½ï¿½, ");
//			case 4:
//				printf("ï¿½ï¿½ï¿½ï¿½ eï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½å¿¡ï¿½ï¿?");
//				break;
//			case 5:
//				printf("ï¿½ï¿½ï¿½ï¿½ï¿½Ï°ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ");
//				break;
//			}
//			printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ï¸ï¿½ ï¿½ï¿½Æ®ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Ç®ï¿½ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n");
//			game++;
//		}
//		else if (command == 3) {
//			switch (randInt) {
//			case 1:
//				printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Â·ï¿½, ");
//			case 3:
//				printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½Å¾ ï¿½Ù¿ï¿½ï¿½ï¿½ ");
//				break;
//			case 2:
//				printf("ï¿½ï¿½ï¿½ï¿½ ï¿½Ç°ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Â¿ï¿½ï¿½ï¿½ï¿½ï¿½, ");
//			case 4:
//				printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ì´ï¿½ ï¿½ï¿½ï¿½Ã·ï¿½ï¿½Ì½ï¿½ï¿½ï¿½ï¿½ï¿½ ");
//				break;
//			case 5:
//				printf("ï¿½Æ´ï¿½ï¿½ï¿½ Ä¿ï¿½Â´ï¿½Æ¼ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿?");
//				break;
//			}
//			printf("ï¿½ï¿½ï¿½Îµï¿½ï¿?ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Å¿ï¿?ï¿½Ã°ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Â½ï¿½ï¿½Ï´ï¿½.\n");
//			meet++;
//		}
//		else if (command == 4) {
//			switch (randInt2) {
//			case 1:
//				printf("ï¿½È¸ï¿½ï¿½ï¿½ï¿½Ú°ï¿½ ï¿½Ö´ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½Ä«ï¿½ä¿¡ï¿½ï¿½ ");
//				break;
//			case 2:
//				printf("Çªï¿½ï¿½ï¿½ï¿½ ï¿½Üµï¿½ ï¿½ï¿½ ï¿½Ñ°ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ");
//				break;
//			case 3:
//				printf("ï¿½ï¿½ï¿½ï¿½ ï¿½Ö´ï¿½ Ä§ï¿½ë¿¡ï¿½ï¿½ ");
//				break;
//			}
//			printf("ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½Þ½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Ï¸ï¿½ ï¿½Ç·Î¸ï¿½ È¸ï¿½ï¿½ï¿½ß½ï¿½ï¿½Ï´ï¿½.\n");
//			rest += 3;
//		}
//	} while (1);
//
//	printf("\n============================================\n");
//	printf("                   ï¿½ï¿½ï¿?             \n");
//	printf("============================================\n");
//	if (day <= 7) {
//		printf("ï¿½ï¿½ï¿½Ù¸ï¿½ È°ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ Ã¤ Âªï¿½ï¿½ ï¿½Ã°ï¿½ï¿½ï¿½ ï¿½ê·¯ï¿½ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n");
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
//					printf("ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½ï¿½ ï¿½Úµï¿½ ï¿½Ô¹ï¿½ï¿½Ú°ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				case 1:
//					printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Î±×·ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½Ö´Ï¾ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ú°ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				case 2:
//					printf("ï¿½ï¿½ï¿½ï¿½ï¿?È­ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï´ï¿½ ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½Æ®ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ú°ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				case 3:
//					printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Íºï¿½ï¿½Ì½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï´ï¿½ ï¿½é¿£ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ú°ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				default:
//					printf("ï¿½ï¿½ï¿?ï¿½Ã½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½è¸¦ ï¿½Ñ°ï¿½ï¿½Ï´ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½Æ®ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï¾î°¡ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				}
//			}
//
//			else if (level > code && level >= people) {
//				switch (level) {
//				case 0:
//					printf("ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Ì·ï¿?ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½Ï¹ï¿½ ï¿½ï¿½ï¿½ï¿½Ú°ï¿?ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				case 1:
//					printf("ï¿½Öºï¿½ ï¿½ï¿½ï¿½Îµï¿½ ï¿½ï¿½ï¿½Ì¿ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½Ç·ï¿½ï¿½Ú·ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Þ°ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				case 2:
//					printf("Ä¿ï¿½Â´ï¿½Æ¼ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ì¸ï¿½ï¿½ï¿½ ï¿½Ë·ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				case 3:
//					printf("ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Õ¿ï¿½ ï¿½ï¿½ ï¿½Ö»ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Ä¿ï¿½ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				default:
//					printf("ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È¸ï¿½ï¿½ï¿½ï¿½ È°ï¿½ï¿½ï¿½Ï´ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Î°ï¿½ï¿½Ì¸Ó°ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				}
//			}
//			else if (people > code && people > level) {
//				switch (people) {
//				case 0:
//					printf("ï¿½Öºï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Â´ï¿½ ï¿½Ò¼ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ Ä£ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Î°ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				case 1:
//					printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Î°ï¿½ï¿½è¸¦ ï¿½ï¿½ï¿½ï¿½ï¿½Ï¸ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Í¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿?\n"); break;
//				case 2:
//					printf("ï¿½ï¿½ï¿½ï¿½ ï¿½Î¸ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È¸ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½ï¿½ï¿½ï¿½ ï¿½Î¹ï¿½ï¿½ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				case 3:
//					printf("Å¹ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½É·ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï´ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½Ü±ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				default:
//					printf("ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½Å·Ú¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Þ´ï¿½ ï¿½ï¿½Ä¡ï¿½ï¿½ï¿½ï¿½ ï¿½Ç¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n"); break;
//				}
//			}
//		}
//		else {
//			printf("ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½Ä¡ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï¸ï¿½ ï¿½ï¿½Æ¿Ô½ï¿½ï¿½Ï´ï¿?\n");
//			printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ç·ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ç°ï¿½ï¿½ï¿½ Å©ï¿½ï¿½ ï¿½ï¿½Ä¡ï¿½ï¿½ ï¿½ï¿½ï¿½Ò½ï¿½ï¿½Ï´ï¿½.\n");
//			printf("ï¿½ï¿½ï¿½Ï´ï¿½ ï¿½ï¿½Ç¥ï¿½ï¿½ ï¿½Ì·ï¿½ï¿?ï¿½Íµï¿½ ï¿½ß¿ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½, ï¿½ï¿½ï¿½Î´ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Þ½ï¿½ï¿½ï¿½ ï¿½Ýµï¿½ï¿?ï¿½Ê¿ï¿½ï¿½Õ´Ï´ï¿½.\n");
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
//		printf("ï¿½ï¿½ %dï¿½ï¿½ï¿½ï¿½\n", sheep);
//	}
//	printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½.\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("ï¿½ï¿½ %dï¿½ï¿½ï¿½ï¿½\n", sheep);
//		if (sheep == 3) {
//			printf("ï¿½ï¿½ï¿½ß¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½.\n");
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
//			printf("ï¿½ï¿½ï¿½Æ¼ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ß´ï¿½.\n");
//			continue;
//		}
//		printf("ï¿½ï¿½ %dï¿½ï¿½ï¿½ï¿½\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("ï¿½ï¿½ %dï¿½ï¿½ï¿½ï¿½\n", sheep);
//	}
//	printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½.\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Ò´ï¿½.\n");
//			continue;
//		}
//		else if (sheep == 45) {
//			printf("ï¿½ï¿½ï¿½ß¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½.\n");
//			break;
//		}
//		printf("ï¿½ï¿½ %dï¿½ï¿½ï¿½ï¿½\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("ï¿½ï¿½ï¿½ï¿½ %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 1; round <= 10; round++)
//	{
//		printf("ï¿½ï¿½ï¿½ï¿½ %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("ï¿½ï¿½ï¿½ï¿½Æ® %dï¿½ï¿½\n", count);
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
//	printf("ï¿½ï¿½ï¿½ï¿½ %d\n", sum_number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("ï¿½Ýºï¿½ï¿½ï¿½ È½ï¿½ï¿½ï¿½ï¿½ ï¿½Ô·ï¿½ï¿½Ï¼ï¿½ï¿½ï¿½ :");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("ï¿½ß¾ï¿½\n");
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
//	printf("ï¿½ï¿½ï¿½Úµï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½: %d\n", sum);
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
//	printf("100 ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½Õ´Ï´ï¿?\n");
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
//	printf("100ï¿½ï¿½ï¿½ï¿½ 7ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½ï¿½ï¿½ï¿½Õ´Ï´ï¿?\n");
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
//	printf("1ï¿½ï¿½ï¿½ï¿½ 10ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½ï¿½ï¿?: ");
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
//	printf("1ï¿½ï¿½ï¿½ï¿½ 10ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½ï¿½ï¿?: ");
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
//	printf("1ï¿½ï¿½ 1ï¿½ï¿½\n");
//	printf("1ï¿½ï¿½ 2ï¿½ï¿½\n");
//	printf("1ï¿½ï¿½ 3ï¿½ï¿½\n");
//	printf("2ï¿½ï¿½ 1ï¿½ï¿½\n");
//	printf("2ï¿½ï¿½ 2ï¿½ï¿½\n");
//	printf("2ï¿½ï¿½ 3ï¿½ï¿½\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%dï¿½ï¿½ %dï¿½ï¿½\n", myClass, student); student++;
//	printf("%dï¿½ï¿½ %dï¿½ï¿½\n", myClass, student); student++;
//	printf("%dï¿½ï¿½ %dï¿½ï¿½\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%dï¿½ï¿½ %dï¿½ï¿½\n", myClass, student); student++;
//	printf("%dï¿½ï¿½ %dï¿½ï¿½\n", myClass, student); student++;
//	printf("%dï¿½ï¿½ %dï¿½ï¿½\n", myClass, student); student++;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%dï¿½ï¿½ %dï¿½ï¿½\n", myClass, student);
//	}
//
//	myClass++;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%dï¿½ï¿½ %dï¿½ï¿½\n", myClass, student);
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
//			printf("%dï¿½ï¿½ %dï¿½ï¿½\n", myClass, student);
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
//			printf("%dï¿½ï¿½ %dï¿½ï¿½\n", myClass, student);
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
//				printf("%dï¿½Ð³ï¿½ %dï¿½ï¿½ %dï¿½ï¿½ \n", grade, myClass, student);
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
//			printf("4ï¿½ï¿½ - %d, 6ï¿½ï¿½ - %d\n", dice, secdice);
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
//		printf("%dï¿½ï¿½Â° ï¿½ï¿½ï¿½ï¿½ ï¿½Ýºï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½\n", outer);
//
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("ï¿½ï¿½ï¿½ï¿½ ï¿½Ýºï¿½ï¿½ï¿½ %dï¿½ï¿½ ï¿½Ýºï¿½\n", inter);
//		}
//		printf("%dï¿½ï¿½Â° ï¿½ï¿½ï¿½ï¿½ ï¿½Ýºï¿½ï¿½ï¿½ Å»ï¿½ï¿½\n", outer);
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
//	printf("<ï¿½ï¿½ï¿½ï¿½Å² ï¿½ï¿½ï¿?31!>\n");
//	printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Õ´Ï´ï¿½! 31ï¿½ï¿½ ï¿½ï¿½ï¿½Ï´ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿?ï¿½ï¿½ï¿½ÔµË´Ï´ï¿½. (0 ï¿½Ô·Â½ï¿½ ï¿½Ï³Ñ±ï¿½)\n");
//	for (;;) {
//		
//		for (int x = 1; x <= 3; x++) {
//			printf("%c : ", 'A' + player);
//			scanf("%d", &input);
//
//			if (num != input) {
//				if (input == 0) {
//					if (x == 1) {
//						printf("ï¿½ï¿½ï¿½ï¿½ ï¿½Ñ±ï¿½ï¿?ï¿½ï¿½ï¿½Ø¼ï¿½ï¿½ï¿½ ï¿½Ï³ï¿½ ï¿½Ì»ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Ø¾ï¿½ ï¿½Õ´Ï´ï¿½.\n");
//						x--;
//						continue;
//					}
//					break;
//				}
//
//				printf("ï¿½ß¸ï¿½ï¿½ï¿½ ï¿½Ô·ï¿½ï¿½Ô´Ï´ï¿½.\n");
//				printf("ï¿½ï¿½ï¿½ï¿½ ï¿½Ô·ï¿½ï¿½Ø¾ï¿½ï¿½Ï´ï¿½ ï¿½ï¿½ï¿½ï¿½ %dï¿½Ô´Ï´ï¿½.\n", num);
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
//		printf("ï¿½ï¿½ï¿½ï¿½ ï¿½Ñ¾î°©ï¿½Ï´ï¿½.\n");
//	}
//			
//	printf("ï¿½ï¿½ï¿½ï¿½ %cï¿½ï¿½ ï¿½Â¸ï¿½ï¿½Ô´Ï´ï¿½!\n", 'A' + player);
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
//			printf("ï¿½ï¿½ï¿½Î±×·ï¿½ ï¿½ï¿½ï¿½ï¿½\n");
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
//			printf("ï¿½ï¿½ï¿½Î±×·ï¿½ ï¿½ï¿½ï¿½ï¿½\n");
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
//	printf("numï¿½ï¿½ ï¿½È¿ï¿½ ï¿½ï¿½ï¿½ï¿½Ö´ï¿?);
//	printf(" 1ï¿½ï¿½Â° ï¿½ï¿½ï¿½Ú´ï¿½? : %d\n", num[1]);
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	int num[3] = { 3,6,9 };
//	cout << "numï¿½ï¿½ ï¿½È¿ï¿½ ï¿½ï¿½ï¿½ï¿½Ö´ï¿?1ï¿½ï¿½Â° ï¿½ï¿½ï¿½Ú´ï¿½ ? : " << num[1] << endl;
//}

//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	printf("%dï¿½ï¿½Â°ï¿½ï¿½ %d ï¿½ï¿½ï¿½ï¿½\n", 0, num[0]);
//	printf("%dï¿½ï¿½Â°ï¿½ï¿½ %d ï¿½ï¿½ï¿½ï¿½\n", 1, num[1]);
//	printf("%dï¿½ï¿½Â°ï¿½ï¿½ %d ï¿½ï¿½ï¿½ï¿½\n", 2, num[2]);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	int k = 0;
//	printf("%dï¿½ï¿½Â°ï¿½ï¿½ %d ï¿½ï¿½ï¿½ï¿½\n", k, num[k]); k++;
//	printf("%dï¿½ï¿½Â°ï¿½ï¿½ %d ï¿½ï¿½ï¿½ï¿½\n", k, num[k]); k++;
//	printf("%dï¿½ï¿½Â°ï¿½ï¿½ %d ï¿½ï¿½ï¿½ï¿½\n", k, num[k]); k++;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	for (int k = 0; k < 3; k++) {
//		printf("%dï¿½ï¿½Â°ï¿½ï¿½ %d ï¿½ï¿½ï¿½ï¿½\n", k, num[k]);
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
//		printf("ÇöÀç %d°³ ÀÔ·ÂÇÏ´Â Ä­ÀÔ´Ï´Ù. : ", i+1);
//		scanf("%d", &arr[i]);
//	}
//
//	for (;;) {
//
//		printf("ÀÔ·ÂÇÏ½Ç °ªÀ» Àû¾îÁÖ¼¼¿ä. : ");
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
//	cout << "ÃÖ¼Ú°ª : " << min << endl;
//	cout << "ÃÖ´ë°ª : " << max << endl;
//	cout << "ÃÑÇÕ : " << sum << endl;
//	cout << "Æò±Õ : " << average << endl;
//
//}

//#include <iostream>
//using namespace std;
///* 1ÀÌ/°¡ ³ª¿Â È½¼ö : 3
//*  2ÀÌ/°¡ ³ª¿Â È½¼ö : 1
//*  3ÀÌ/°¡ ³ª¿Â È½¼ö : 2
//*  4ÀÌ/°¡ ³ª¿Â È½¼ö : 2
//*  5ÀÌ/°¡ ³ª¿Â È½¼ö : 1
//*  6ÀÌ/°¡ ³ª¿Â È½¼ö : 1
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
//		cout << i << "ÀÌ/°¡ ³ª¿Â È½¼ö : " << sum[i] << endl;
//	}
//
//		//printf("%dÀÌ/°¡ ³ª¿Â È½¼ö : %d\n", count, sum);
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

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int num[4] = { 4,3,1,2 };
//	int temp;
//
//	temp = num[0];
//	num[0] = num[2];
//	num[2] = temp;
//
//	temp = num[3];
//	num[3] = num[1];
//	num[1] = temp;
//
//
//	temp = num[2];
//	num[2] = num[3];
//	num[3] = temp;
//
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "num["<< i <<"] = " << num[i] << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int num[4] = {};
//	int temp;
//
//	for (int i = 0; i <= 3; i++) {
//		cin >> num[i];
//	}
//
//	int k;
//	int con = 3;
//
//	for(;con >= 1;)
//	{
//		k = 0;
//		for (int i = 0; i < con; i++) {
//			if (num[k] > num[k + 1])
//			{
//				temp = num[k + 1];
//				num[k + 1] = num[k];
//				num[k] = temp;
//			}
//			k++;
//		}
//		con--;
//	}
//	/*k = 0;
//	for (int i = 0; i < 2; i++) {
//		if (num[k] > num[k + 1])
//		{
//			temp = num[k + 1];
//			num[k + 1] = num[k];
//			num[k] = temp;
//		}
//		k++;
//	}
//	con--;
//
//
//	k = 0;
//	for (int i = 0; i < 1; i++) {
//		if (num[k] > num[k + 1])
//		{
//			temp = num[k + 1];
//			num[k + 1] = num[k];
//			num[k] = temp;
//		}
//		k++;
//	}*/
//
//	
//
//	
//
//
//	for (int i = 0; i < 4; i++) {
//		cout << "num[" << i << "] = " << num[i] << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int *buff;
//	buff = new int[2];
//	cin >> buff[0] >> buff[1];
//
//	cout << "new : " << buff[0] << " " << buff[1] << endl;
//	delete buff;
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int n;
//	cin >> n;
//	int* buff = new int[n];
//	for (int i = 0; i < n; i++)
//		cin >> buff[i];
//	for (int i = 0; i < n; i++)
//		cout << buff[i] << "";
//	delete buff;
//}

//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void main()
//{
//	srand((unsigned int)time(NULL));
//
//	int n;
//	cin >> n;
//	
//	int* buff = new int[n];
//	for (int i = 0; i < n; i++) {
//		buff[i] = rand() % 5 + 5;
//	}
//
//	cout << "new : ";
//	for (int i = 0; i < n; i++) {
//		cout << buff[i] << "";
//	}
//	cout << endl;
//
//	delete buff;
//}

//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void main()
//{
//	srand((unsigned int)time(NULL));
//
//	int n;
//	cin >> n;
//
//	int* buff = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		buff[i] = rand() % 101;
//	}
//
//	char grade[6] { 'F','D','C','B','A','A' };
//	for (int i = 0; i < n; i++)
//	{
//		cout << "" << i + 1 << "¹øÂ° ÇÐ»ý : ";
//		cout << "( " << buff[i] << "Á¡ ) - ";
//		cout << grade[buff[i] / 20];
//		cout << endl;
//	}
//	delete buff;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s(10, '_');
//	cout << s << endl;
//	cout << s.length() << endl;
//	cout << s.empty() << endl;
//
//	s.clear();
//	cout << s.empty() << endl;
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int num = 100;
//	int* pNum = &num;
//
//	cout << "num = " << num << endl;
//	cout << "&num = " << &num << endl;
//	cout << "*pNum = " << *pNum << endl;
//	cout << "pNum = " << pNum << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main() {
//	string s;
//	getline(cin, s);
//	cout << s.substr(7, 5) << endl;
//	s.append(" :)");
//	s += "\n hi";
//	cout << s << endl;
//	s.insert(5, "??");
//	cout << s << endl;
//	printf("%s", s.c_str());
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main() 
//{
//	string s = "Hello!";
//	cout << s[0] << endl; // 
//	cout << s.at(1) << endl;
//	cout << s.front() << endl;
//	cout << s.back() << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s = "example string";
//	char search = 'e';
//	int at = s.find(search, 0);
//	cout << "'e' is at" << at << " " << endl;
//	cout << s.rfind("e") << endl;
//	if (s.find("xyz") == string::npos)
//		cout << "¾øÀ½" << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s;
//	getline(cin, s);
//	int len = s.length();
//	for (int i = len - 1; i >= 0; i--)
//	{
//		cout << s[i];
//	}
//}

/*
Á¾·áÇÏ½Ã·Á¸é quitÀ» ÀÔ·ÂÇØÁÖ¼¼¿ä.
¹®ÀÚ¿­À» ÀÔ·ÂÇØÁÖ¼¼¿ä : hello world
Ã£À» ¹®ÀÚ¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä : hel
1¹øÂ°¿¡ ÀÕ½À´Ï´Ù
Ã£À» ¹®ÀÚ¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä : lo
4¹øÂ°¿¡ ÀÕ½À´Ï´Ù
Ã£À» ¹®ÀÚ¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä : zz
¾ø½À´Ï´Ù
Ã£À» ¹®ÀÚ¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä : quit
ÇÁ·Î±×·¥ Á¾·á
*/
//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s;
//	cout << "Á¾·áÇÏ½Ã·Á¸é quitÀ» ÀÔ·ÂÇØÁÖ¼¼¿ä." << endl;
//	cout << "¹®ÀÚ¿­À» ÀÔ·ÂÇØÁÖ¼¼¿ä : ";
//	getline(cin, s);
//	string text;
//	for (;;)
//	{
//		cout << "Ã£À» ¹®ÀÚ¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä : ";
//		getline(cin, text);
//		int pos = s.find(text, 0);
//		if (text == "quit") { break; }
//		if (s.find(text) == string::npos)
//		{
//			cout << "Ã£À¸½Ã´Â ¹®ÀÚ°¡ ¾ø½À´Ï´Ù." << endl;
//		}
//		else
//		cout << "Ã£À¸½Ã´Â ¹®ÀÚ´Â " << pos + 1 << "¹øÂ°¿¡ ÀÖ½À´Ï´Ù." << endl;
//		
//	}
//	cout << "ÇÁ·Î±×·¥À» Á¾·áÇÕ´Ï´Ù." << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s;
//	cin >> s;
//	cout << s.substr(7, 5) << endl;
//	cout << s << endl;
//
//	s.insert(5, "??");
//	cout << s << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s = "Hello, World!";
//	s.replace(7, 5, "C++");
//	cout << s << endl;
//	cout << s << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s = "apple";
//	cout << s.compare("apple") << endl;
//	cout << s.compare("banana") << endl;
//	cout << s.compare("aaa") << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s = "42";
//	int n = stoi(s);
//	double d = stod("3.14");
//	string t = to_string(n * 2);
//	cout << n << " " << d << " " << t << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s = "apple,banana,cherry";
//	string delim = ",";
//	size_t pos = 0;
//	while ((pos = s.find(delim)) != string::npos) {
//		cout << s.substr(0, pos) << " ";
//		s.erase(0, pos + delim.length());
//	}
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s = "This is a sample string";
//	s = s.replace(10, 6, "useful");
//	cout << s << endl;
//}

//#include <iostream>
//#include <string>
//#include <math.h>
//using namespace std;
//
//void main()
//{
//	string s;
//	int temp;
//	int result = 0;
//	int i = 0;
//	int sectemp;
//	double power;
//	cin >> s;
//	int len = s.length() - 1;
//
//	for (;len >= 0;) {
//		if (s[i] <= 'F' && s[i] >= 'A')
//		{
//			temp = s[i] - 'A' + 10;
//			power = pow(16, len);
//			sectemp = temp * power;
//		}
//		else if (s[i] >= '1' && s[i] <= '9')
//		{
//			temp = s[i] - '0';
//			power = pow(16, len);
//			sectemp = temp * power;
//		}
//		result += sectemp;
//		i++;
//		len--;
//	}
//
//	cout << result << endl;
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int num = 100;
//	int *pNum = &num;
//
//	cout << "num = " << num << endl;
//	cout << "&num = " << &num << endl;
//	cout << "*pNum = " << *pNum << endl;
//	cout << "pNum = " << pNum << endl;
//}

//#include <iostream> 
//using namespace std;
//
//void main()
//{
//	int value = 50;
//	int* ptr = &value;
//	
//	cout << "º¯°æ Àü value: " << value << endl;
//
//	*ptr = 100;
//	cout << "º¯°æ ÈÄ value: " << value << endl;
//}

//#include <stdio.h>
//
//void main()
//{
//	char a = 'A';
//	char* pA = &a;
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pAÀÇ Å©±â : %d byte\n", sizeof(pA));
//	printf("pBÀÇ Å©±â : %d byte\n", sizeof(pB));
//	printf("pCÀÇ Å©±â : %d byte\n", sizeof(pC));
//
//	printf("*pAÀÇ Å©±â : %d byte\n", sizeof(*pA));
//	printf("*pBÀÇ Å©±â : %d byte\n", sizeof(*pB));
//	printf("*pCÀÇ Å©±â : %d byte\n", sizeof(*pC));
//}

//#include <stdio.h>
//void main()
//{
//	int* numptr;
//	int num1 = 10;
//	int num2 = 20;
//	numptr = &num1;
//	printf("%d\n", *numptr);
//	numptr = &num2;
//	printf("%d\n", *numptr);
//}

