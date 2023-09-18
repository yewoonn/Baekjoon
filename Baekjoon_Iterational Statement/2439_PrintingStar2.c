#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iLine, iCount;
	int iBlank;

	scanf("%d", &iLine);

	for (int i = 0; i < iLine; i++) {
		iCount = i + 1;
		iBlank = iLine - iCount;

		for (int z = 0; z < iBlank; z++) {
			printf(" ");
		}
		for (int j = 0; j < iCount; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}