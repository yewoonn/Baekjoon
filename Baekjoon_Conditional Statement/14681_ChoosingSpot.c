#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iX, iY;
	int iSpot;

	scanf("%d", &iX);
	scanf("%d", &iY);

	if (iX == 0 || iY == 0) {
		printf("0�� �ƴ� ���ڸ� �Է��ϼ���.");
	}
	else {
		if (iX > 0 && iY > 0) {
			iSpot = 1;
		}
		else if (iX > 0 && iY < 0) {
			iSpot = 4;
		}
		else if (iX < 0 && iY > 0) {
			iSpot = 2;
		}
		else {
			iSpot = 3;
		}
	}

	printf("%d", iSpot);


	return 0;
}