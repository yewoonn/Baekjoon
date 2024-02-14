#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 100
#include <stdio.h>

int main() {
	int iKind, iTry, iNum, iTemp, iHZ, iAgain, iSum;
	int iSwitch1, iSwitch2, iStart, iEnd, iStartIndex, iEndIndex;
	int iBasket[ARRSIZE] = { 0 };

	scanf("%d%d", &iKind, &iTry);

	// 각각의 바구니에 숫자 입력
	for (int i = 0; i < iKind; i++) {
		iNum = i + 1;
		iBasket[i] = iNum;
	}

	for (int k = 0; k < iTry; k++) {

		scanf("%d%d", &iStart, &iEnd);

		iStartIndex = iStart - 1;
		iEndIndex = iEnd - 1;
		
		// 범위가 많은 경우 오류 발생
		
		iAgain = (iEndIndex - iStartIndex + 1) / 2;
		
		
			
		for (int i = 0; i < iAgain; i++) {
			iSwitch1 = iStartIndex + i;
			iSwitch2 = iEndIndex - i;

			iTemp = iBasket[iSwitch1];
			iBasket[iSwitch1] = iBasket[iSwitch2];
			iBasket[iSwitch2] = iTemp;
		}

		// 1 2 (짝수 개, 홀수 차) >> 1
		// i 0 1
		// 0번째 1 > 0 / 1번째 0 > 1 
		// 1 2 3 (홀수 개, 짝수 차)  >> 1
		// i 0 1 2
		// 0번째 0 > 2 / 1번째 1 > 1 / 2번째 2 > 0   
		// 1 2 3 4 (짝수 개, 홀수 차) >> 2
		// i 0 1 2 3, iAgain 2
		// 0번째 0 > 3 / 1번째 1 > 2 / 2번째 2 > 1 / 3번째 3 > 0  
		//		 > 3 - 0		> 3 - 1 
		// 1 2 3 4 5 (홀수 개, 짝수 차) >> 2
		// i 0 1 2 3 4, iAgain 2
		// 0번째 0 > 4 / 1번째 1 > 3 / 2번째 2 > 2 / 3번째 3 > 3 / 4번째 4 > 0

		// 현 바구니 상태 출력
		/*
		for (int i = 0; i < iKind; i++) {
			printf("%d ", iBasket[i]);
		}
		printf("\n");
		*/

	}


	for (int i = 0; i < iKind; i++) {
		printf("%d ", iBasket[i]);
	}



	return 0;
}