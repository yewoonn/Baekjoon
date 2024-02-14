#define _CRT_SECURE_NO_WARNINGS
#define SIZE 9
#include <stdio.h>


int main() {
	int iMax, iInput, iRow, iLine; //열, 행
	int iNum[SIZE][SIZE] = { -1 };
	// 배열 선언 시 초기화해줘야 함
	iMax = 0;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			scanf("%d", &iInput);
			iNum[i][j] = iInput;

			if (iInput >= iMax) {
				iMax = iInput;
				iRow = j + 1;
				iLine = i + 1;
			}
			// 모두 0일 때, iRow랑 iLine 정의되지 않음
		}
	}

	printf("%d\n", iMax);
	printf("%d %d", iLine, iRow);

	return 0;
}