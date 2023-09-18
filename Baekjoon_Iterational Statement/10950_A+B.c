#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iReturn;
	int iNum1, iNum2;
	int iRes;

	scanf("%d", &iReturn);

	for (int i = 0; i < iReturn; i++) {
		scanf("%d%d", &iNum1, &iNum2);

		if (iNum1 > 0 && iNum1 < 10 && iNum2 > 0 && iNum2 < 10) {
			printf("%d\n", iNum1 + iNum2);
		}
		else {
			break;
		}

	}

	return 0;
}