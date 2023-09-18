#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iYear;
	int iCal4, iCal100, iCal400;
	int iRes;

	scanf("%d", &iYear);

	iCal4 = iYear % 4;
	iCal100 = iYear % 100;
	iCal400 = iYear % 400;

	if (iCal4 == 0 && (iCal100 != 0 || iCal400 == 0)) {
		printf("1");
	}
	else {
		printf("0");
	}

	return 0;
}