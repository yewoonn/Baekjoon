#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iTotal;
	int iKind;
	int iRes;
	int iPrice, iCount;

	iRes = 0;

	scanf("%d", &iTotal);
	scanf("%d", &iKind);

	for (int i = 0; i < iKind; i++) {
		scanf("%d",&iPrice);
		scanf("%d",&iCount);

		iRes = iRes + (iPrice * iCount);
	}

	if (iRes == iTotal) {
		printf("Yes");
	}
	else {
		printf("No");
	}


	return 0;
}