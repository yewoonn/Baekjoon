#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iAgain;
	int iNum1, iNum2;
	int iRes, iTurn;
	int ar[100];

	scanf("%d\n", &iAgain);

	for (int i = 0; i < iAgain; i++) {

		scanf("%d%d", &iNum1, &iNum2);

		if (iNum1 > 0 && iNum1 < 10 && iNum2 > 0 && iNum2 < 10) {
			ar[i] = iNum1 + iNum2;
			iTurn = i + 1;
		}
		else {
			break;
		}

	}

	for (int i = 0; i < iAgain; i++) {
		iTurn = i + 1;
		printf("Case #%d: %d\n", iTurn, ar[i]);
	}

	return 0;
}