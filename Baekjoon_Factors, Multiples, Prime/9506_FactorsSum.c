#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100000
#include <stdio.h>

int main() {
	int Factors[SIZE] = { 0 };
	int iInput;
	int iDiv, iDivRes;
	int iSum, iCnt;
	
	while (1) {
		// 반복 시, 배열의 요소 초기화
		for (int i = 0; i < SIZE; i++) {
			Factors[i] = 0;
		}

		scanf("%d", &iInput);

		if (iInput == -1) {
			break;
		}

		// 약수 구하는 배열
		for (int i = 0; i < iInput; i++) {
			iDiv = i + 1;
			iDivRes = iInput % iDiv;

			if (iDivRes == 0) {
				Factors[i] = iDiv;
			}
		}
		

		// 자기 자신을 제외한 약수의 합 
		iSum = 0;
		for (int i = 0; i < iInput-1; i++) {
			if (Factors[i] != 0) {
				iSum = iSum + Factors[i];
			}
		}
		//printf("약수의 합 : %d\n", iSum);

		// 완전수 확인
		if (iSum == iInput) {
			printf("%d = %d ", iInput, 1);

			for (int i = 0; i < iInput - 1; i++) {
				if (Factors[i] != 0 && Factors[i] != 1) {
					printf("+ %d ", Factors[i]);
				}
			}

			printf("\n");
		}

		else {
			printf("%d is NOT perfect.\n", iInput);
		}
	}
	
	return 0;
}