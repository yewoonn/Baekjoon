#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int iNum1, iNum2;
    int iMin;

    scanf("%d%d", &iNum1, &iNum2);
    
    iMin = iNum1 - iNum2;
    
    printf("%d", iMin);
    
    return 0;
}