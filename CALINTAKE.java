import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main (String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int mounika = sc.nextInt();
        int uday = sc.nextInt();
        int z = sc.nextInt();
        int totalCaloriesEaten = uday * z;
        
        if (totalCaloriesEaten > mounika) {
            System.out.println(-1);
        } else {
            System.out.println(mounika - totalCaloriesEaten);
        }
    }
}
