#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 1000
#include <stdio.h>

int main() {
	int iKind;
	double dBeSum, dAfSum, dAverage, dMax;
	double dBefore[ARRSIZE];
	double dAfter[ARRSIZE];


	scanf("%d", &iKind);

	dBeSum = 0;
	for (int i = 0; i < iKind; i++) {
		scanf("%lf", &dBefore[i]);

		dBeSum = dBeSum + dBefore[i];
	}

	dMax = dBefore[0];
	for (int i = 0; i < iKind; i++) {
		if (dMax > dBefore[i]) {
			continue;
		}
		else {
			dMax = dBefore[i];
		}
	}

	dAfSum = dBeSum / dMax * 100;
	dAverage = dAfSum / iKind;
	
	printf("%lf", dAverage);

	return 0;
}