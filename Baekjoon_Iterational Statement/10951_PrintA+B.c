#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int answer[100];
	int iNum1, iNum2;
	int iCnt,iCheck;


	iCnt = 0;

	while (1) {

		if (scanf("%d%d", &iNum1, &iNum2) != EOF) {
			if (iNum1 < 0 || iNum1 > 10 || iNum2 < 0 || iNum2 > 10) {
				printf("범위에 맞는 숫자를 입력하세요.\n");
			}
			else {
				answer[iCnt] = iNum1 + iNum2;
				printf("%d\n", answer[iCnt]);
				iCnt = iCnt + 1;
			}
		}
		else {
			break;
		}

		

	}

	return 0;
}