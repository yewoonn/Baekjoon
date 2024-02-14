#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long long iNum1, iNum2,iNum3;
    long long iSum;

    scanf("%lld%lld%lld", &iNum1, &iNum2, &iNum3);

    iSum = iNum1 + iNum2 + iNum3;

    printf("%lld", iSum);

    return 0;
}