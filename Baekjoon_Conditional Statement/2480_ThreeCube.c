#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iN1, iN2, iN3;
	int i12, i23, i13;
	int iNum;
	int iMax, iSame;
	int iMoney;

	iNum = 0;

	scanf("%d %d %d", &iN1, &iN2, &iN3);

	i12 = iN1 - iN2;
	i23 = iN2 - iN3;
	i13 = iN1 - iN3;

	// 2개의 숫자가 동일한 경우( 두 수의 차 = 0) 개수 확인
	if (i12 == 0) {
		iNum += 1;
	}
	if (i23 == 0) {
		iNum += 1;
	}
	if (i13 == 0) {
		iNum += 1;
	}

	// iNum의 값에 따라 동일한 수의 갯수 차이
	if (iNum == 0) {
		// iNum = 0일 경우, 수 3개가 모두 다름
		if (iN1 > iN2) {
			if (iN1 > iN3) {
				iMax = iN1;
			}
			else {
				iMax = iN3;
			}
		}
		else {
			if (iN2 > iN3) {
				iMax = iN2;
			}
			else {
				iMax = iN3;
			}
		}
		iMoney = iMax * 100;
		// 3개가 모두 다를 경우 상금의 함수 식
	}

	else if (iNum == 1) {
		// iNum = 1일 경우, 3개 중 2개가 동일하다. 
		if (i12 == 0) {
			iSame = iN1;
		}
		if (i23 == 0) {
			iSame = iN2;
		}
		if (i13 == 0) {
			iSame = iN3;
		}
		iMoney = 1000 + (iSame * 100);
		// 2개가 동일할 경우 상금의 함수 식
	}

	else {
		// iNum = 3일 경우, 3개가 모두 동일하다.
		// (iNum = 2인 경우는 존재하지 않으며, 0 <= iNum <= 3이다.)
		iSame = iN1;
		iMoney = 10000 + (iSame * 1000);
	}

	printf("상금 : %d", iMoney);

	return 0;
}