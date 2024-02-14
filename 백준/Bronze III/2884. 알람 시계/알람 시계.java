import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int iHour, iMin;
		int iNowTime, iSetTime;
		Scanner oInDev;
		
		oInDev = new Scanner(System.in);
		
		iHour = oInDev.nextInt();
		iMin = oInDev.nextInt();

		
		iNowTime = iHour*60 + iMin;
		iSetTime = iNowTime - 45;
		
		if(iSetTime >= 0) {
			iHour = iSetTime/60;
			iMin = iSetTime%60;
		}
		else {
			iHour = 23;
			iMin = 60+iSetTime;
		}
		
		System.out.print(iHour+" "+iMin);
		
		
		oInDev.close();
	}

}