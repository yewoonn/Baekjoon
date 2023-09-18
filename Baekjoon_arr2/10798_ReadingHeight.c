#define _CRT_SECURE_NO_WARNINGS
#define LINE 5
#define NUM 15
#include <stdio.h>

int main() {
	//쓰레기 값이 존재할 수 있어 초기화
	char cInput[LINE][NUM] = { 0 };


	// 배열에 입력하는 부분
	for (int iLine = 0; iLine < LINE; iLine++) {
			scanf("%s", &cInput[iLine]);
			//getchar(); // \n을 지우기 위한 용도
	}


	// 출력
	for (int iNum = 0; iNum < NUM; iNum++) {
		
		for (int iLine = 0; iLine < LINE; iLine++) {

			if (cInput[iLine][iNum] != 0 ) {
				printf("%c", cInput[iLine][iNum]);
			}
		}
	}
	
}








