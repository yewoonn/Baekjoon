#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iNum1, iNum2;


	scanf("%d %d", &iNum1, &iNum2);

	if (iNum1 > iNum2) {
		printf(">");
	}
	else if (iNum1 < iNum2) {
		printf("<");
	}
	else if (iNum1 == iNum2) {
		printf("==");
	}
	else {
		printf("�ùٸ� ���� �Է��Ͻÿ�.");
	}
}