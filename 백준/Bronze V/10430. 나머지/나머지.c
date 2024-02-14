#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iA, iB, iC;
	int iRes1, iRes2, iRes3, iRes4;

	scanf("%d%d%d", &iA, &iB, &iC);

	iRes1 = (iA + iB) % iC;
	iRes2 = ((iA % iC) + (iB % iC)) % iC;
	iRes3 = (iA * iB) % iC;
	iRes4 = ((iA % iC) * (iB % iC)) % iC;


	printf("%d\n", iRes1);
	printf("%d\n", iRes2);
	printf("%d\n", iRes3);
	printf("%d\n", iRes4);

	return 0;
}