#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iCookTime;
	int iCookHour, iCookMin;
	int iPrevHour, iPrevMin;
	int iNewHour, iNewMin;

	scanf("%d %d", &iPrevHour, &iPrevMin);
	scanf("%d", &iCookTime);

	iCookHour = iCookTime / 60;
	iCookMin = iCookTime % 60;

	iNewHour = iPrevHour + iCookHour;
	iNewMin = iPrevMin + iCookMin;

	if (iNewMin >= 60) {
		iNewHour = iNewHour + 1;
		iNewMin = iNewMin - 60;
	}

	if (iNewHour >= 24) {
		iNewHour = iNewHour - 24;
	}

	printf("%d %d", iNewHour, iNewMin);
	return 0;
}