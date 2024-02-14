import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int iValX, iValY, iQuadrant;
		Scanner oInDev;
		
		oInDev = new Scanner(System.in);
		
		iValX = oInDev.nextInt();
		iValY = oInDev.nextInt();
		
		iQuadrant = 0;
		
		
		if(iValX != 0 && iValY !=0) {
			if(iValX > 0) {
				if(iValY > 0) {
					iQuadrant = 1;
				}
				else {
					iQuadrant = 4;
				}
			}
			else {
				if(iValY > 0) {
					iQuadrant = 2;
				}
				else {
					iQuadrant = 3;
				}
			}
		}
		
		System.out.print(iQuadrant);
		
	}

}
