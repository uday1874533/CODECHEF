import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner MUNNY = new Scanner(System.in);
        int SIDDHU = MUNNY.nextInt();

        int[] activities = {1, 2, 4};
        Arrays.sort(activities);

        int count = 0, total = 0;
        for (int time : activities) {
            if (total + time <= SIDDHU) {
                total += time;
                count++;
            } else break;
        }
        System.out.println(count);
    }
}
