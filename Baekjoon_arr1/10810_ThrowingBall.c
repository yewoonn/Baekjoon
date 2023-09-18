#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 100
#include <stdio.h>

int main() {
	int iTry;
	int iBasket ;
	int iStart, iEnd, iNum;
	int iArr[ARRSIZE] = { 0 };

	// 초기 설정 (N,M) 과정
	scanf("%d", &iBasket);
	scanf("%d", &iTry);

	// 공을 넣는 과정
	for (int i = 0; i < iTry; i++) {
		scanf("%d%d%d", &iStart, &iEnd, &iNum);

		if (iStart >= iBasket || iEnd >= iBasket) {
			printf("ERROR\n");
			continue;
		}
		// while로 바꿔서 Error 났을 때 다시 한번 더

		iStart = iStart - 1;
		iEnd = iEnd - 1;

		for (int i = iStart; i < iEnd + 1; i++) {
			iArr[i] = iNum;
		}
	}

	for (int i = 0; i < iBasket; i++) {
		printf("%d ", iArr[i]);
	}

	return 0;
}