#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iDiv, iCheck, iRes;

	scanf("%d", &iRes);

	for (int i = 1; i < 10000000; i++) {
		iDiv = i + 1;
		iCheck = iRes % iDiv;

		while (iCheck == 0) {
			printf("%d\n", iDiv);
			iRes = iRes / iDiv;
			iCheck = iRes % iDiv;
		}

		if (iRes == 1) {
			break;
		}
	}
}