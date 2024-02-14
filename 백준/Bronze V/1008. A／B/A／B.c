#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long double iNum1, iNum2;
    long double iDiv;

    scanf("%Lf%Lf", &iNum1, &iNum2);

    iDiv = iNum1 / iNum2;

    printf("%.30Lf", iDiv);

    return 0;
}