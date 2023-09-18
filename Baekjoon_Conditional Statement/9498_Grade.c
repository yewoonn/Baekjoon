#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iGrade;
	char iRes;
	
	scanf("%d", &iGrade);

	if (iGrade >= 0 && iGrade <= 100) {
		if (iGrade < 60) {
			iRes = 'F';
		}
		else if (iGrade < 70) {
			iRes = 'D';
		}
		else if (iGrade < 80) {
			iRes = 'C';
		}
		else if (iGrade < 90) {
			iRes = 'B';
		}
		else {
			iRes = 'A';
		}

	}
	else {
		printf("올바른 시험 점수를 입력하시오.");
	}

	printf("%c", iRes);



	return 0;
}