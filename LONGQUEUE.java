import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner siddhu = new Scanner(System.in);
        int T = siddhu.nextInt();  
        
        while (T-- > 0) {
            int N = siddhu.nextInt();  
            int[] wealth = new int[N];
            
            for (int i = 0; i < N; i++) {
                wealth[i] = siddhu.nextInt();
            }
            
            int sushilWealth = wealth[N - 1];  
            int finalPosition = N;  
            
            for (int i = N - 2; i >= 0; i--) {
                if (wealth[i] > sushilWealth / 2) {
                    break;  
                } else {
                    finalPosition--;  
                }
            }
            
            System.out.println(finalPosition);
        }
    }
}
