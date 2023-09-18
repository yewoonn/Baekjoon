#define _CRT_SECURE_NO_WARNINGS
#define SIZE 45000
#include <stdio.h>

void Factorization(int iNum, int iArr[]);
void PrimeCheck(int iArr[], int iNum, int iSize);
int LeastCommonMultiple(int iArr1[], int iArr2[], int iSize);
void TestCase();

int main() {
	int iTry;

	scanf("%d", &iTry);

	for (int i = 0; i < iTry; i++) {
		TestCase();
	}

	return 0;
}

void Factorization(int iNum, int iArr[]) {
	int iDiv, iRes, iCheck;


	for (int i = 1; i < iNum; i++) { 
		//iNum - 1을 하면 자기 자신 제외 > 소수인 경우에 아무런 숫자 나오지 않음
		iDiv = i + 1;
		iRes = iNum;

		while (iRes % iDiv == 0) {
			//printf("%d \n", iDiv); //인수 확인용(자기 자신 포함)
			iArr[iDiv] = iArr[iDiv] + 1;
			iRes = iRes / iDiv;
			iCheck = iRes % iDiv;
		}
		
		if (iRes == 1) {
			break;
		}
	}

}

void PrimeCheck(int iArr[], int iNum, int iSize) {
	int iCnt;

	for (int i = 0; i < iSize; i++) {
		if (iArr[i] != 0) {
			iCnt = 1;
			break;
		}
	}

	if (iCnt = 0) {
		iArr[iNum] = iNum;
	}
}



int LeastCommonMultiple(int iArr1[], int iArr2[], int iSize) {
	int iNum1, iNum2;
	int iBig, iRet;

	iRet = 1;
	for (int i = 0; i < iSize; i++) {
		iNum1 = iArr1[i];
		iNum2 = iArr2[i];

		if (iNum1 > 0 || iNum2 > 0) {
			if (iNum1 > iNum2) {
				iBig = iNum1;
			}
			else {
				iBig = iNum2;
			}

			for (int j = 0; j < iBig; j++) {
				iRet = iRet * i;
			}
		}
	}

	return iRet;
}

void TestCase() {
	int iANum, iBNum, iLeastCommonM, iPrimeC;
	int iA[SIZE] = { 0 };
	int iB[SIZE] = { 0 };

	scanf("%d %d", &iANum, &iBNum);

	Factorization(iANum, iA); // 6 = 2 3
	Factorization(iBNum, iB); // 8 = 2^3

	PrimeCheck(iA, iANum, SIZE);
	PrimeCheck(iB, iBNum, SIZE);

	/*
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", iA[i]);
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", iB[i]);
	}
	printf("\n");
	*/

	iLeastCommonM = LeastCommonMultiple(iA, iB, SIZE);

	// 1 45000일 때 왜 0이 나올까..
	if (iLeastCommonM == 0) {
		iLeastCommonM = iANum * iBNum;
	}

	printf("%d", iLeastCommonM);
}

// 두 수에 대해 소인수 구하기
// ex. 16 = 2^4, 10 = 2 * 5
// 2 ^ 4 = 16과 5 ^ 1 = 5를 곱해 최소공배수 구하기