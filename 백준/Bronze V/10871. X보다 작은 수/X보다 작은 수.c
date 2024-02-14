#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iNum, iInput;
	int iArr[10000] = { 0 };

	scanf("%d", &iNum);
	scanf("%d", &iInput);

	for (int i = 0; i < iNum; i++) {
		scanf("%d", &iArr[i]);
	}

	for (int i = 0; i < iNum; i++) {
		if (iArr[i] < iInput) {
			printf("%d ", iArr[i]);
		}
	}
	return 0;
}