#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int iNum1, iNum2;
    int iSum;

    scanf("%d%d", &iNum1, &iNum2);

    iSum = iNum1 + iNum2;

    printf("%d", iSum);

    return 0;
}