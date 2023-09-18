#define _CRT_SECURE_NO_WARNINGS
#define BIGSIZE 100
#define ONELENGTH 10
#include <stdio.h>


int main() {
	int iNum = 3;
	int iLocateStart[BIGSIZE][BIGSIZE] = { 
		{3,7},
		{15,7},
		{5,2}
	};
	int iLocateEnd[BIGSIZE][BIGSIZE];
	int iSize;

	// 색종이 최소




	// 색종이의 끝점을 배열에 저장
	for (int i = 0; i < iNum; i++) {
		iLocateEnd[i][0] = iLocateStart[i][0] + 1;
		iLocateEnd[i][1] = iLocateStart[i][1] + 1;
	}




}


