import java.util.*;
import java.lang.*;
import java.io.*;

class fastscanner
{
    BufferedReader siddhu = new BufferedReader(new InputStreamReader(System.in));  
    StringTokenizer mouni;
    
    String next()
    {
        while(mouni == null || !mouni.hasMoreTokens())
        {
            try {
                mouni = new StringTokenizer(siddhu.readLine());
            } catch(IOException e){}
        }
        return mouni.nextToken();
    }

    int nextInt()
    {
        return Integer.parseInt(next());
    }

    float nextFloat()
    {
        return Float.parseFloat(next());
    }

    long nextLong()
    {
        return Long.parseLong(next());
    }

    double nextDouble()
    {
        return Double.parseDouble(next());
    }

    String nextLine()
    {
        String s = "";
        try {
            s = siddhu.readLine();
        } catch(IOException e){}
        return s;
    }
}

class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        fastscanner siddhu = new fastscanner();
        PrintWriter mouni = new PrintWriter(System.out);
        int t = siddhu.nextInt();
        
        while(t-- > 0)
        {
            int sum = 0;
            int n = siddhu.nextInt();
            int[] a = new int[n];
            
            for(int i = 0; i < n; i++) 
                a[i] = siddhu.nextInt();
                
            if(a[0] == a[1]) sum++;
            if(a[n-2] == a[n-1]) sum++;
            
            for(int i = 1; i < n-1; i++)
            {
                if(a[i] == a[i+1] && a[i] == a[i-1])
                {
                    sum++;
                }
            }
            mouni.println(n - sum);
        }
        mouni.flush();
    }
}
