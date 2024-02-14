#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iReturn;
	int iNum1, iNum2;
	int iRes;

	scanf("%d", &iReturn);

	for (int i = 0; i < iReturn; i++) {
		scanf("%d%d", &iNum1, &iNum2);
		printf("%d\n", iNum1 + iNum2);
	}
	

	return 0;
}