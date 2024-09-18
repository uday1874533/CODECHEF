import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        
        int UDAY = sc.nextInt();
        
        while (UDAY-- > 0) {
            int mounika = sc.nextInt();
            int[] A = new int[mounika];
            
            for (int i = 0; i < mounika; i++) {
                A[i] = sc.nextInt();
            }
            
            if (mounika <= 3) {
                System.out.println(0);
                continue;
            }
            
            Arrays.sort(A);
            
            int option1 = A[mounika - 3] - A[0];
            int option2 = A[mounika - 2] - A[1];
            int option3 = A[mounika - 1] - A[2];
            
            System.out.println(Math.min(option1, Math.min(option2, option3)));
        }
        
        sc.close();
    }
}
