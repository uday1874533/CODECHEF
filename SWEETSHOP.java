import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner siddhu = new Scanner(System.in);
        int moon = siddhu.nextInt();
        int laddus = siddhu.nextInt();
        
        int remainingMoney = moon - (laddus * 10);
        int jalebis = remainingMoney / 20;
        
        System.out.println(jalebis);
    }
}
