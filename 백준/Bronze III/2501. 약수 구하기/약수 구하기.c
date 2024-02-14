#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int Factors[10000] = { 0 };
	int iInput, iOrder;
	int iDiv, iDivRes, iCnt, iRes;

	iCnt = 0;
	scanf("%d %d", &iInput, &iOrder);

	for (int i = 0; i < iInput; i++) {
		iDiv = i + 1;
		iDivRes = iInput % iDiv;

		if (iDivRes == 0) {
			Factors[i] = iDiv;
		}
	}

	for (int i = 0; i < iInput; i++) {
		if (Factors[i] != 0) {
			iCnt = iCnt + 1;

			if (iCnt == iOrder) {
				iRes = Factors[i];
				
			}

			if (iCnt < iOrder) {
				iRes = 0;
			}
		}
	}
	
	printf("%d", iRes);
	
	return 0;
}