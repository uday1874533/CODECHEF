import java.util.*;
import java.io.*;

class SellingDonuts {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int SIDDHU = Integer.parseInt(br.readLine());
        StringBuilder result = new StringBuilder();

        for (int t = 0; t < SIDDHU; t++) {
            String[] firstLine = br.readLine().split(" ");
            int N = Integer.parseInt(firstLine[0]);
            int M = Integer.parseInt(firstLine[1]);

            int[] donuts = new int[N];
            String[] secondLine = br.readLine().split(" ");
            for (int i = 0; i < N; i++) {
                donuts[i] = Integer.parseInt(secondLine[i]);
            }

            int[] TWILIGHT = new int[M];
            String[] thirdLine = br.readLine().split(" ");
            for (int i = 0; i < M; i++) {
                TWILIGHT[i] = Integer.parseInt(thirdLine[i]);
            }

            int sadCustomers = 0;

            for (int i = 0; i < M; i++) {
                int type = TWILIGHT[i] - 1;
                if (type >= 0 && type < N && donuts[type] > 0) {
                    donuts[type]--;
                } else {
                    sadCustomers++;
                }
            }

            result.append(sadCustomers).append("\n");
        }

        System.out.print(result);
    }
}
