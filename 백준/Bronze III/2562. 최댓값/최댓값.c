#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 9
#include <stdio.h>

int main() {
	int iNum, iCnt, iMax;
	int iArr[ARRSIZE];

	for (int i = 0; i < ARRSIZE; i++) {
		scanf("%d", &iArr[i]);
	}

	iMax = iArr[0];
	for (int i = 0; i < ARRSIZE; i++) {
		if (iArr[i] < iMax) {
			continue;
		}
		else {
			iMax = iArr[i];
			iCnt = i + 1;
		}
	}

	printf("%d\n", iMax);
	printf("%d\n", iCnt);

	return 0;
}