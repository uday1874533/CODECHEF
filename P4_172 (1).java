import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        while (T-- > 0) {
            String A = br.readLine();
            String B = br.readLine();
            if (B.length() > A.length()) {
                System.out.println(-1);
                continue;
            }
            Map<Character, List<Integer>> charIndices = new HashMap<>();
            for (int i = 0; i < A.length(); i++) {
                char c = A.charAt(i);
                charIndices.putIfAbsent(c, new ArrayList<>());
                charIndices.get(c).add(i);
            }
            boolean possible = true;
            int i = A.length() - 1;
            long sumKeep = 0;
            for (int j = B.length() - 1; j >= 0; j--) {
                char c = B.charAt(j);
                if (!charIndices.containsKey(c) || charIndices.get(c).isEmpty()) {
                    possible = false;
                    break;
                }
                List<Integer> indices = charIndices.get(c);
                int pos = Collections.binarySearch(indices, i);
                if (pos < 0) {
                    pos = -pos - 2;
                }
                if (pos < 0 || indices.get(pos) > i) {
                    possible = false;
                    break;
                }
                int idx = indices.get(pos);
                sumKeep += (idx + 1);
                i = idx - 1;
            }
            if (!possible) {
                System.out.println(-1);
            } else {
                int K = A.length() - B.length();
                long sumA = (long) A.length() * (A.length() + 1) / 2;
                long sumD = sumA - sumKeep;
                long cost = sumD - ((long) K * (K - 1)) / 2;
                System.out.println(cost);
            }
        }
    }
}