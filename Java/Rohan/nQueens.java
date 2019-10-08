import java.util.*;
import java.lang.*;
import java.io.*;

class Solution {
	public static void main (String[] args) throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		while(t-->0){
		    int n = Integer.parseInt(br.readLine());
		    if (n==2 || n==3){
		        System.out.println(-1);
		    } else {
		        backtrack(0, n, new int[n]);
		        System.out.println();
		    }
		}
	}

    static boolean safe( int r, int c, int row[])
    {
        for(int i=0; i<c; i++)
        {
            if (row[i] == r || (Math.abs(row[i] - r) == Math.abs(i - c)))
                return false;
        }
        return true;
    }
    
    // uses the concept of backtracking to try out all the possible solutions and then printing the valid solutions
    static void backtrack(int c, int n, int row[])
    {
        if (c > n-1)
        {
            System.out.print("[");
            for(int i=0; i<n; i++)
               System.out.print(1+row[i] + " ");
            System.out.print("] ");
        }
        
        for(int r=0; r<n; r++)
        {
            if (safe(r,c,row))
            {
                row[c] = r;
                backtrack(c+1, n, row);
            }
        }
    }
}
