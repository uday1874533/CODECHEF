import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int t = 0; t < T; t++) {
            int N = sc.nextInt();
            int K = sc.nextInt();
            int P = sc.nextInt();

            int[] chairs = new int[N];
            for (int i = 0; i < N; i++) {
                chairs[i] = sc.nextInt();
            }

            Arrays.sort(chairs);

            int vedChair = chairs[N - 1];

            int varunHeight = P;
            for (int i = 0; i < N - 1; i++) {
                varunHeight += chairs[i];
            }

            int vedHeight = K + vedChair;

            if (vedHeight > varunHeight) {
                System.out.println("Ved");
            } else if (vedHeight < varunHeight) {
                System.out.println("Varun");
            } else {
                System.out.println("Equal");
            }
        }

        sc.close();
    }
}
