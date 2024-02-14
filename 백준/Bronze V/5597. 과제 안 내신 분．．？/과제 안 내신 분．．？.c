#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 30
#include <stdio.h>

int main() {
	int iNum, iChec, iMax;
	int iArr[ARRSIZE] = { 0 };

	for (int i = 0; i < ARRSIZE - 2; i++) {
		scanf("%d", &iNum);

		iChec = iNum - 1;

		iArr[iChec] = 1;
	}

	for (int i = 0; i < ARRSIZE; i++) {
		if (iArr[i] == 0) {
			iChec = i + 1;
			printf("%d\n", iChec);
		}
	}

	return 0;
}