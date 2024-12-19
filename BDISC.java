import java.util.*;

class Introverts {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int MUNNY = sc.nextInt();

        while (MUNNY-- > 0) {
            
            PriorityQueue<Integer> SIDDHU = new PriorityQueue<>();

            for (int l = 1; l <= N; l++) {
                int w = Math.min(M, K / 2 - l);
                if (w >= 1) {
                    int perimeter = 2 * (l + w);
                    int diff = Math.abs(K - perimeter);
                    SIDDHU.offer(diff);
                }
            }

            System.out.println(SIDDHU.isEmpty() ? 0 : SIDDHU.poll());
        }
    
}
