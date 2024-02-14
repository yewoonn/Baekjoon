#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iN, iM;
	int iAdd1[100][100] = { 0 };
	int iAdd2[100][100] = { 0 };
	int iRes[100][100] = { 0 };

	scanf("%d%d", &iN, &iM);

	for (int i = 0; i < iN; i++) {
		for (int j = 0; j < iM; j++) {
			scanf("%d", &iAdd1[i][j]);
		}
	}

	for (int i = 0; i < iN; i++) {
		for (int j = 0; j < iM; j++) {
			scanf("%d", &iAdd2[i][j]);
		}
	}

	for (int i = 0; i < iN; i++) {
		for (int j = 0; j < iM; j++) {
			iRes[i][j] = iAdd1[i][j] + iAdd2[i][j];
			printf("%d ", iRes[i][j]);
		}
		printf("\n");
	}
}