#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 100
#include <stdio.h>

int main() {
	int iTry;
	int iBasket, iChB1, iChB2;
	int iTemp, iPut;
	int iArr[ARRSIZE] = { 0 };

	// 초기 설정 (N,M) 과정
	scanf("%d", &iBasket);
	scanf("%d", &iTry);

	// 공을 넣는 과정
	for (int i = 0; i < iBasket; i++) {
		iPut = i + 1;
		iArr[i] = iPut;
	}
	
	for (int i = 0; i < iTry; i++) {
		scanf("%d%d", &iChB1, &iChB2);

		iChB1 = iChB1 - 1;
		iChB2 = iChB2 - 1;


		iTemp = iArr[iChB1];
		iArr[iChB1] = iArr[iChB2];
		iArr[iChB2] = iTemp;

	}

	for (int i = 0; i < iBasket; i++) {
		printf("%d ", iArr[i]);
	}

	return 0;
}