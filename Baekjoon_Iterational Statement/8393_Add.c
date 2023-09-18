#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iInput;
	int iRes;
	int iCheck;

	printf("n (1 <= n <= 10,000)\n");
	scanf("%d", &iInput);

	iRes = 0;

	if (iInput >= 1 && iInput <= 10000) {
		for (int i = 0; i < iInput; i++) {
			iCheck = i + 1;
			iRes = iRes + iCheck;
		}

		printf("%d", iRes);
	}
	else {
		return 0;
	}


	return 0;
}