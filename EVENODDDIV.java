import java.util.*;
import java.io.*;

class DivisorComparison {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(reader.readLine());  

        StringBuilder result = new StringBuilder();
        for (int i = 0; i < T; i++) {
            int N = Integer.parseInt(reader.readLine());
            int evenDivisors = 0;
            int oddDivisors = 0;

            for (int j = 1; j <= N; j++) {
                if (N % j == 0) {
                    if (j % 2 == 0) {
                        evenDivisors++;
                    } else {
                        oddDivisors++;
                    }
                }
            }

            if (evenDivisors > oddDivisors) {
                result.append("1\n");
            } else if (evenDivisors == oddDivisors) {
                result.append("0\n");
            } else {
                result.append("-1\n");
            }
        }

        System.out.print(result.toString());
    }
}
