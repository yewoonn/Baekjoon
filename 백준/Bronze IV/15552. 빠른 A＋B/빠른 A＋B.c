#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iAgain;
	int iNum1, iNum2;
	int iResult;

	scanf("%d", &iAgain);

	if (iAgain <= 1000000) {
		for (int i = 0; i < iAgain; i++) {
			scanf("%d%d", &iNum1, &iNum2);

			if (iNum1 >= 1 && iNum1 <= 1000 && iNum2 >= 1 && iNum2 <= 1000) {
				iResult = iNum1 + iNum2;
			}
			else {
				return 0;
			}
			

			printf("%d\n", iResult);
		}
	}
	else {
		return 0;
	}

	return 0;
}