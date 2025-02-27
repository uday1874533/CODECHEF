import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        while (T-- > 0) {
            int N = Integer.parseInt(br.readLine());
            String s1 = br.readLine();
            String s2 = br.readLine();
            String s3 = br.readLine();

            int curr0_1 = countZeros(s1);
            int curr0_2 = countZeros(s2);
            int curr0_3 = countZeros(s3);
            int total0 = curr0_1 + curr0_2 + curr0_3;

            int minSwaps = Integer.MAX_VALUE;
            for (int a = 0; a < 2; a++) {
                for (int b = 0; b < 2; b++) {
                    for (int c = 0; c < 2; c++) {
                        int sum = (a + b + c) * N;
                        if (sum == total0) {
                            int def1 = a * N - curr0_1;
                            int def2 = b * N - curr0_2;
                            int def3 = c * N - curr0_3;

                            int sumPos = 0;
                            if (def1 > 0) sumPos += def1;
                            if (def2 > 0) sumPos += def2;
                            if (def3 > 0) sumPos += def3;

                            if (sumPos < minSwaps) {
                                minSwaps = sumPos;
                            }
                        }
                    }
                }
            }

            System.out.println(minSwaps != Integer.MAX_VALUE ? minSwaps : -1);
        }
    }

    private static int countZeros(String s) {
        int count = 0;
        for (char c : s.toCharArray()) {
            if (c == '0') {
                count++;
            }
        }
        return count;
    }
}