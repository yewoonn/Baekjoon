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
		printf("�ùٸ� ���� ������ �Է��Ͻÿ�.");
	}

	printf("%c", iRes);



	return 0;
}