import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while (t-- > 0) {
		    PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
		    int n = sc.nextInt();
		    
		    for (int i = 0; i < n; i++){
		        int temp = sc.nextInt();
		        
		        pq.add(temp);
		    }
		    
		    int res = 0;
		    while (pq.size() > 1) {
		        int curr = pq.remove();
		        
		        if (curr == pq.peek()) {
		            pq.add(Math.abs(curr - pq.remove()));
		        }
		        else {
		            res++;
		        }
		    }
		    
		    res += pq.size();
		    
		    System.out.println(res);
		}
		
        
	}
}
