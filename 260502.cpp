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

#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int num2 = 1;
    while (num >= 10) {
        num /= 10;
        num2 *= 10;
    }
    printf("%d", num2);
}
