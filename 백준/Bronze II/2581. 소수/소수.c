#define _CRT_SECURE_NO_WARNINGS
#define MAX 10000
#include <stdio.h>

int main() {
	int iRangeNum[MAX] = { 0 };
	int iRange, iStart, iEnd, iAgain, iDivNum, iDiv, iCheck, iSum, iMin;

	scanf("%d%d", &iStart, &iEnd);

	iRange = iEnd - iStart;
	iAgain = iRange + 1;

	// 배열에 범위에 맞는 수 저장
	for (int i = 0; i < iAgain; i++) {
		iRangeNum[i] = iStart + i;
	}
	
	// 소수 식별
	for (int i = 0; i < iAgain; i++) {
		iDivNum = iRangeNum[i] - 1;

		if (iRangeNum[i] == 1) {
			iRangeNum[i] = -1; // 1은 항상 iCheck == 0으로 예외
		}

		for (int k = 0; k < iDivNum; k++) { // 자기 자신보다 더 작은 수 까지 나누기
			iDiv = k + 1;
			iCheck = iRangeNum[i] % iDiv;

			if (iDiv != 1 && iCheck == 0) {
				iRangeNum[i] = -1; // 소수가 아니면 데이터를 -1로
			}

		}

	}

	// 합과 최솟값 구하기
	iSum = 0;
	iMin = iEnd;
	for (int i = 0; i < iAgain; i++) {
		if (iRangeNum[i] != -1) {

			iSum = iSum + iRangeNum[i];

			if (iMin > iRangeNum[i]) {
				iMin = iRangeNum[i];
			}
		}
	}


	// 출력
	if (iSum == 0) {
		printf("%d", -1);
	}
	else {
		printf("%d \n%d", iSum, iMin);
	}

	return 0;
}