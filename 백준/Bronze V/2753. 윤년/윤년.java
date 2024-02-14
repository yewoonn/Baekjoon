import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int iYear, iCheck;
		int i4Year, i100Year, i400Year;
		Scanner oInDev;
		
		oInDev = new Scanner(System.in);
		
		iCheck = -1;
		iYear = oInDev.nextInt();
		
		i4Year = iYear%4;
		i100Year = iYear%100;
		i400Year = iYear%400;
		
		if(i4Year == 0 && (i400Year == 0 || i100Year !=0)) {
			iCheck = 1; //윤년
		}
		else {
			iCheck = 0;
		}
		
		System.out.print(iCheck);
		
		
		oInDev.close();
	}

}
