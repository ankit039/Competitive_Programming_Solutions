import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
		    long n=sc.nextLong();
		    long k=sc.nextLong();
		    long s=n/k;
		    if(s%k==0)
		    System.out.println("NO");
		    else
		    System.out.println("YES");
		}
	}
}
