#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int iNum1, iNum2;
    int iSum, iMin, iMul, iDiv, iRes;

    scanf("%d%d", &iNum1, &iNum2);

    iSum = iNum1 + iNum2;
    iMin = iNum1 - iNum2;
    iMul = iNum1 * iNum2;
    iDiv = iNum1 / iNum2;
    iRes = iNum1 % iNum2;

    printf("%d\n", iSum);
    printf("%d\n", iMin);
    printf("%d\n", iMul);
    printf("%d\n", iDiv);
    printf("%d\n", iRes);

    return 0;
}