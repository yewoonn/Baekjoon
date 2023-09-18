#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iAgain;
	int iNum1, iNum2;
	int iRes, iTurn, iFlag;
	int i, ar[100];

	scanf("%d\n", &iAgain);

	iFlag = 0;
	iTurn = 0;
	i = 0;

	while (iTurn != iAgain) {

		scanf("%d %d", &iNum1, &iNum2);

		
		if (iNum1 > 0 && iNum1 < 10 && iNum2 > 0 && iNum2 < 10) {
			ar[i] = iNum1 + iNum2;
			i++;
			iTurn = iTurn + 1;
		}
		else {
			continue;
		}

		
	}

	for (int j = 0; j < iAgain; j++) {
		iFlag = j + 1;
		printf("Case #%d: %d\n", iFlag, ar[j]);
	}

	return 0;
}

//해당 범위의 숫자를 입력하지 않는 경우에도 이후에 다시 입력 받도록 처리