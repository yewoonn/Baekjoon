#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iNum1, iNum2;
	
	while (1) {
		scanf("%d%d", &iNum1, &iNum2);

		if (iNum1 == 0 && iNum2 == 0) {
			break;
		}
		else if (iNum2 % iNum1 == 0) {
			printf("factor\n");
		}
		else if (iNum1 % iNum2 == 0) {
			printf("multiple\n");
		}
		else {
			printf("neither\n");
		}
	}


	return 0;
}