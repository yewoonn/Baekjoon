#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 10
#include <stdio.h>

int main() {
	int iNum, iMod, iKind;
	int iArr[ARRSIZE];
	int iCnt[42] = { 0 };

	for (int i = 0; i < ARRSIZE; i++) {
		scanf("%d", &iArr[i]);

		iArr[i] = iArr[i] % 42;
	}

	for (int iMod = 0; iMod < 42; iMod++) {

		for (int j = 0; j < ARRSIZE; j++) {
			
			if (iMod == iArr[j]) {
				iCnt[iMod] = iCnt[iMod] + 1;
			}

		}

	}

	iKind = 0;
	for (int i = 0; i < 42; i++) {
		
		if (iCnt[i] != 0) {
			iKind = iKind + 1;
		}

	}

	printf("%d", iKind);

	return 0;

}