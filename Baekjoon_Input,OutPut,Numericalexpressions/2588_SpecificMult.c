#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int iNum1, iNum2, iRes;
    int iMul1, iMul2, iMul3;
    int iNum2_1, iNum2_10, iNum2_100;

    scanf("%d%d", &iNum1, &iNum2);

    iNum2_100 = iNum2 / 100;
    iNum2_10 = (iNum2 % 100) / 10;
    iNum2_1 = (iNum2 % 10);

    iMul1 = iNum1 * iNum2_1;
    iMul2 = iNum1 * iNum2_10;
    iMul3 = iNum1 * iNum2_100;

    iRes = iNum1 * iNum2;

    printf("%d\n", iMul1);
    printf("%d\n", iMul2);
    printf("%d\n", iMul3);
    printf("%d\n", iRes);

    return 0;
}