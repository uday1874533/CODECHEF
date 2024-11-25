import java.util.Scanner;

public class Moneymaking {
    public static void main(String[] args) {
        Scanner MOON = new Scanner(System.in);

        int LUCKY = MOON.nextInt(); 
        int PRASSU = MOON.nextInt();

        int SIDDHU = LUCKY * 5000 + PRASSU * 9800; 

        System.out.println(SIDDHU);

        MOON.close();
    }
}
