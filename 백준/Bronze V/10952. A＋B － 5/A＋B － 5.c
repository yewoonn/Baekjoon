#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int answer[100];
	int iNum1, iNum2;
	int iCnt;


	iCnt = 0;

	while (1) {

		scanf("%d%d", &iNum1, &iNum2);


		if (iNum1 == 0 && iNum2 == 0) {
			break;
		}
		else {
			answer[iCnt] = iNum1 + iNum2;
			iCnt = iCnt + 1;
		}

	}

	for (int i = 0; i < iCnt; i++) {
		printf("%d\n", answer[i]);
	}

	return 0;
}