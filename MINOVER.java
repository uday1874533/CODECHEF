import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        while (T-- > 0) {
            String[] nm = br.readLine().split(" ");
            int N = Integer.parseInt(nm[0]);
            int M = Integer.parseInt(nm[1]);
            String[] A = br.readLine().split(" ");
            String[] B = br.readLine().split(" ");
            
            String[] smallestB = getSmallestCyclicRotation(B);
            
            for (int i = 0; i <= N - M; i++) {
                String[] currentSubarray = Arrays.copyOfRange(A, i, i + M);
                if (compareArrays(currentSubarray, smallestB) > 0) {
                    // Replace the subarray with smallestB
                    System.arraycopy(smallestB, 0, A, i, M);
                }
            }
            
            for (int i = 0; i < N; i++) {
                System.out.print(A[i] + " ");
            }
            System.out.println();
        }
    }
    
    private static String[] getSmallestCyclicRotation(String[] B) {
        String[] smallest = B.clone();
        for (int i = 1; i < B.length; i++) {
            String[] rotated = new String[B.length];
            System.arraycopy(B, i, rotated, 0, B.length - i);
            System.arraycopy(B, 0, rotated, B.length - i, i);
            if (compareArrays(rotated, smallest) < 0) {
                smallest = rotated;
            }
        }
        return smallest;
    }
    
    private static int compareArrays(String[] a, String[] b) {
        for (int i = 0; i < a.length; i++) {
            int cmp = a[i].compareTo(b[i]);
            if (cmp != 0) {
                return cmp;
            }
        }
        return 0;
    }
}