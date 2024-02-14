int main() {
	int iNum;
	int iRes;
	int iCheck;

	scanf("%d", &iNum);
	
	if (iNum >= 1 && iNum <= 9) {
		for (int i = 0; i < 9; i++) {
			iCheck = i + 1;
			iRes = iCheck * iNum;
			printf("%d * %d = %d\n", iNum, iCheck, iRes);
		}
		
	}
	else {
		printf("숫자를 다시 입력해주세요");
	}

	return 0;
}