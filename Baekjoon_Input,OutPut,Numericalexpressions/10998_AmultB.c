#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int iNum1, iNum2;
    int iMul;

    scanf("%d%d", &iNum1, &iNum2);

    iMul = iNum1 * iNum2;

    printf("%d", iMul);

    return 0;
}