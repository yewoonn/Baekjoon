#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iLine,iCount;

	scanf("%d", &iLine);

	for (int i = 0; i < iLine; i++) {
		iCount = i + 1;

		for (int j = 0; j < iCount; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}