#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iCnt, iFind, iCheck;
	int iArr[100] = { 101, };

	for (int i = 0; i < 100; i++) {
		printf("%d", iArr[i]);
	}

	scanf("%d", &iCnt);

	for (int i = 0; i < iCnt; i++) {
		scanf("%d", &iArr[i]);
	}

	scanf("%d", &iFind);

	iCheck = 0;
	for (int i = 0; i < iCnt; i++) {
		if (iArr[i] == iFind) {
			iCheck = iCheck + 1;
		}
	}

	printf("%d", iCheck);

	return 0;
}