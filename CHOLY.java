import java.util.*;
import java.lang.*;
import java.io.*;

class Introverts {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);

        int mounika = sc.nextInt();  
        int uday = sc.nextInt();     
        int z = sc.nextInt();        

        double teamPoints = mounika + 0.5 * uday;
        double opponentPoints = z + 0.5 * uday;

        int remainingGames = 4 - (mounika + uday + z);

        if (teamPoints + remainingGames > opponentPoints) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

        sc.close();
    }
}
