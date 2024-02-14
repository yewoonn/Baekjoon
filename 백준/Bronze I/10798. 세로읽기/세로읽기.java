import java.util.Scanner;

public class Main {
    //상수 선언
    public static final int CHAR_NUM = 15;
    public static final int LINE_NUM = 5;
    public static void main(String[] args) {
        int i, j, iCnt;
        String sInOneLine;
        Scanner oInDev;
        char[][]cInputARR;

        iCnt = 0;
        oInDev = new Scanner(System.in);
        cInputARR = new char [LINE_NUM][CHAR_NUM];
        //배열 내에 기본값 0으로 초기화

        while(iCnt < LINE_NUM){
            sInOneLine = oInDev.next();
            
            
            /*
            배열의 크기 이상의 알파벳을 입력했을 때 오류
            if(sInOneLine.length() > CHAR_NUM){
                System.out.println(CHAR_NUM + " 이상의 문자는 입력할 수 없습니다.");
                sInOneLine = oInDev.next();
            }
            */

            for(i=0; i< sInOneLine.length(); i++){
                cInputARR[iCnt][i] = sInOneLine.charAt(i);
            }
            iCnt ++;
        }
            
    
        for(j=0; j<CHAR_NUM; j++){
            for(i=0; i< LINE_NUM; i++){
                if( cInputARR[i][j] != 0 ){
                    System.out.print(cInputARR[i][j]);
                }
            }
        }

        oInDev.close();
    
    }
}
