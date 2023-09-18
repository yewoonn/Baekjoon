#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iNum, iMin, iMax;
	int iArr[1000000];

	scanf("%d", &iNum);

	if (iNum <= 1000000) {
		for (int i = 0; i < iNum; i++) {
			scanf("%d", &iArr[i]);
		}

		iMin = iArr[0];
		for (int i = 0; i < iNum; i++) {
			if (iArr[i] > iMin) {
				continue;
			}
			else {
				iMin = iArr[i];
			}
		}

		iMax = iArr[0];
		for (int i = 0; i < iNum; i++) {
			if (iArr[i] < iMax) {
				continue;
			}
			else {
				iMax = iArr[i];
			}
		}

		//iMin이랑 iMax 구하는 거 조건식 한번에

		printf("%d ", iMin);
		printf("%d", iMax);

	}
	
	return 0;
}