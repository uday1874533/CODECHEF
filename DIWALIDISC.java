import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main (String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);

        int MOON = sc.nextInt();
        int SIDDHU = sc.nextInt();
        int amountToPay = Math.max(0, MOON - SIDDHU);

        System.out.println(amountToPay);
    }
}
