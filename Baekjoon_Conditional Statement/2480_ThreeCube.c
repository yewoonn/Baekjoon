#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iN1, iN2, iN3;
	int i12, i23, i13;
	int iNum;
	int iMax, iSame;
	int iMoney;

	iNum = 0;

	scanf("%d %d %d", &iN1, &iN2, &iN3);

	i12 = iN1 - iN2;
	i23 = iN2 - iN3;
	i13 = iN1 - iN3;

	// 2���� ���ڰ� ������ ���( �� ���� �� = 0) ���� Ȯ��
	if (i12 == 0) {
		iNum += 1;
	}
	if (i23 == 0) {
		iNum += 1;
	}
	if (i13 == 0) {
		iNum += 1;
	}

	// iNum�� ���� ���� ������ ���� ���� ����
	if (iNum == 0) {
		// iNum = 0�� ���, �� 3���� ��� �ٸ�
		if (iN1 > iN2) {
			if (iN1 > iN3) {
				iMax = iN1;
			}
			else {
				iMax = iN3;
			}
		}
		else {
			if (iN2 > iN3) {
				iMax = iN2;
			}
			else {
				iMax = iN3;
			}
		}
		iMoney = iMax * 100;
		// 3���� ��� �ٸ� ��� ����� �Լ� ��
	}

	else if (iNum == 1) {
		// iNum = 1�� ���, 3�� �� 2���� �����ϴ�. 
		if (i12 == 0) {
			iSame = iN1;
		}
		if (i23 == 0) {
			iSame = iN2;
		}
		if (i13 == 0) {
			iSame = iN3;
		}
		iMoney = 1000 + (iSame * 100);
		// 2���� ������ ��� ����� �Լ� ��
	}

	else {
		// iNum = 3�� ���, 3���� ��� �����ϴ�.
		// (iNum = 2�� ���� �������� ������, 0 <= iNum <= 3�̴�.)
		iSame = iN1;
		iMoney = 10000 + (iSame * 1000);
	}

	printf("��� : %d", iMoney);

	return 0;
}