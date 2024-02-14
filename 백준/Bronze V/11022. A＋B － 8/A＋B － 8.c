#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iAgain;
	int iNum1, iNum2;
	int iTurn;
	int iRes[100], iNo1[100], iNo2[100];

	scanf("%d\n", &iAgain);

	for (int i = 0; i < iAgain; i++) {

		scanf("%d%d", &iNum1, &iNum2);

		if (iNum1 > 0 && iNum1 < 10 && iNum2 > 0 && iNum2 < 10) {
			iRes[i] = iNum1 + iNum2;
			iNo1[i] = iNum1;
			iNo2[i] = iNum2;
			iTurn = i + 1;
		}
		else {
			break;
		}

	}

	for (int i = 0; i < iAgain; i++) {
		iTurn = i + 1;
		printf("Case #%d: %d + %d = %d\n", iTurn, iNo1[i], iNo2[i], iRes[i]);
	}

	return 0;
}