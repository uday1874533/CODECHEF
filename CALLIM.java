import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main (String[] args) throws java.lang.Exception {
        Scanner siddhu = new Scanner(System.in);
        int t = siddhu.nextInt();
        
        while (t-- > 0) {
            int n = siddhu.nextInt();
            int k = siddhu.nextInt();
            int[] mouni = new int[n];
            for (int i = 0; i < n; i++) {
                mouni[i] = siddhu.nextInt();
            }
            
            int totalCalories = 0, sweets = 0;
            for (int i = 0; i < n; i++) {
                if (totalCalories + mouni[i] > k) {
                    break;
                }
                totalCalories += mouni[i];
                sweets++;
            }
            System.out.println(sweets);
        }
    }
}
