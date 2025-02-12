import java.util.*;

public class IntrovertsSeating {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        while (T-- > 0) {
            int N = scanner.nextInt();
            int[] P = new int[N];
            for (int i = 0; i < N; i++) {
                P[i] = scanner.nextInt();
            }
            if (isPossiblePermutation(N, P)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        scanner.close();
    }

    private static boolean isPossiblePermutation(int N, int[] P) {
        TreeSet<Integer> occupied = new TreeSet<>();
        PriorityQueue<int[]> heap = new PriorityQueue<>((a, b) -> {
            if (b[0] != a[0]) return b[0] - a[0];
            return a[1] - b[1];
        });

        for (int i = 1; i <= N; i++) {
            heap.offer(new int[]{N, i});
        }

        for (int idx = 0; idx < N; idx++) {
            if (heap.isEmpty()) {
                return false;
            }
            int[] top = heap.poll();
            int seat = top[1];
            if (seat != P[idx]) {
                return false;
            }
            occupied.add(seat);

            // Update distances for remaining seats
            PriorityQueue<int[]> newHeap = new PriorityQueue<>((a, b) -> {
                if (b[0] != a[0]) return b[0] - a[0];
                return a[1] - b[1];
            });

            for (int[] entry : heap) {
                int s = entry[1];
                int minDist = Integer.MAX_VALUE;
                Integer lower = occupied.lower(s);
                Integer higher = occupied.higher(s);
                if (lower != null) {
                    minDist = Math.min(minDist, s - lower);
                }
                if (higher != null) {
                    minDist = Math.min(minDist, higher - s);
                }
                newHeap.offer(new int[]{minDist, s});
            }
            heap = newHeap;
        }
        return true;
    }
}