import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner scanner = new Scanner(System.in);
        int MOON = scanner.nextInt(); 
        
        while (MOON-- > 0) {
            long SIDDHU = scanner.nextLong(); 
            int cnt = 0, flag = 0, j = 0;
            long[] arr = new long[2]; 
            long temp = SIDDHU;

            for (long i = 2; i < temp; i++) {
                if (temp % i == 0) {
                    cnt++;
                    temp /= i;
                    arr[j++] = i;
                }
                if (cnt == 2) {
                    flag = 1;
                    break;
                }
            }

            if (flag == 1 && arr[0] != temp && arr[1] != temp) {
                System.out.println("YES");
                System.out.println(arr[0] + " " + arr[1] + " " + temp);
            } else {
                System.out.println("NO");
            }
        }
        scanner.close();
    }
}
