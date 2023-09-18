#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iNum;
	int iAgain;

	scanf("%d", &iNum);

	iAgain = iNum / 4;

	for (int i = 0; i < iAgain; i++) {
		printf("long ");
	}

	printf("int");


	return 0;
}