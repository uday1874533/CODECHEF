import java.util.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner scanner = new Scanner(System.in);
        
        int testCases = scanner.nextInt();
        
        while (testCases > 0) {
            int n = scanner.nextInt();
            String inputString = scanner.next();
            
            String result = "";
            int oneCount = 0;
            int zeroCount = 0;
            
            for (int i = 0; i < n; i++) {
                char currentChar = inputString.charAt(i);
                
                if (currentChar == '1') {
                    oneCount++;
                    if (i == n - 1) {
                        if (zeroCount > 0) {
                            System.out.println("NO");
                        } else {
                            System.out.println("YES");
                        }
                    } else {
                        if (zeroCount > 0)
                            System.out.println("NO");
                        else
                            System.out.println("IDK");
                    }
                } else {
                    zeroCount++;
                    System.out.println("NO");
                }
            }
            testCases--;
        }
    }
}
