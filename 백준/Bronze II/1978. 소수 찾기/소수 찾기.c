#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iKind, iCheck, iDiv, iMany, iDivNum;
	int iNums[100] = { 0 };
	int iPrimeNum[100] = { 0 };

	// 개수 입력
	scanf("%d", &iKind);

	// 지정된 개수 만큼의 수 입력
	for (int i = 0; i < iKind; i++) {
		scanf("%d", &iNums[i]);
	}

	// 소수 식별
	for (int i = 0; i < iKind; i++) {
		iDivNum = iNums[i] - 1;

		if (iNums[i] == 1) {
			iNums[i] = -1;
		}

		for (int k = 0; k < iDivNum; k++) { // 자기 자신보다 더 작은 수 까지 나누기
			iDiv = k + 1;
			iCheck = iNums[i] % iDiv;

			if (iDiv != 1 && iCheck == 0) {
				iNums[i] = -1; // 소수가 아니면 데이터를 -1로
			}

		}

	}

	// 배열 출력
	//for (int i = 0; i < iKind; i++) {
	//		printf("%d ", iNums[i]);
	//}

	//개수 세기
	iMany = 0;
	for (int i = 0; i < iKind; i++) {
		if (iNums[i] != -1) {
			iMany = iMany + 1;
		}
	}

	printf("%d", iMany);
	return 0;
}