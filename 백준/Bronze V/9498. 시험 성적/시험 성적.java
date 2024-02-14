import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
	int iScore;
	char cGrade;
	Scanner oInDev;
	
	iScore = 0;
	oInDev = new Scanner(System.in);
	
	iScore = oInDev.nextInt();
	
	// 범위 확인
	if(iScore > 100 || iScore < 0) {
		System.out.print("0~100까지의 점수를 입력해주세요.");
	}
	
	
	// 성적 계산
	if(iScore >= 90) {
		cGrade = 'A';
	}
	else if(iScore >= 80) {
		cGrade = 'B';
	}	
	else if(iScore >= 70) {
		cGrade = 'C';
	}	
	else if(iScore >= 60) {
		cGrade = 'D';
	}	
	else {
		cGrade = 'F';
	}
	
	System.out.print(cGrade);
	
	oInDev.close();
	}
}
