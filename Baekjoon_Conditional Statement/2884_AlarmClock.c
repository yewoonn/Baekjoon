#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iPrevHour, iPrevMin;
	int iNewHour, iNewMin;

	scanf("%d%d", &iPrevHour, &iPrevMin);

	if (iPrevMin >= 45) {
		iNewHour = iPrevHour;
		iNewMin = iPrevMin - 45;
	}
	else {
		iNewHour = iPrevHour - 1;
		iNewMin = iPrevMin + 15;

		if (iNewHour == -1) {
			iNewHour = 23;
		}
	}

	printf("%d %d", iNewHour, iNewMin);


	return 0;
}