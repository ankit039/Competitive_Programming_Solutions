package GoogleKickstart;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class Flattening {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		try{
			BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
			
			int T = Integer.parseInt(br.readLine().trim());
			
			for (int i = 1; i <= T; i++) {
				String arr[] = br.readLine().trim().split(" ");
				int N = Integer.parseInt(arr[0]);
				int K = Integer.parseInt(arr[1]);
				String arr2[] = br.readLine().trim().split(" ");
				int[] iarr = new int[arr2.length];
				
				for(int j =0 ;j <arr2.length ; j++){
					iarr[j] = Integer.parseInt(arr2[j]);
				}
			
				//Do something
				int y = calRebuilds2(N,K,iarr);
				System.out.println("Case #"+i+": "+y);
			}
		}
		catch(Exception e){
			e.printStackTrace();
		}

	}
	
	static int caljumps(int n, int k , ArrayList<Integer> arr){
		int jumps = 0;
		for(int i = 1; i<arr.size() ;i++){
			if((int)arr.get(i-1)==(int)arr.get(i)){
				continue;
			}
			else{
				jumps++;
			}
		}	
		return jumps;
	}
	
	static int calRebuilds2(int n, int k , int[] arr){
		int jumps = 0;
		int minRebuilds = Integer.MAX_VALUE;
		for (int i = 0; i < (1<<n); i++){
			ArrayList<Integer>  list = new ArrayList<Integer>();
			for (int j = 0; j < n; j++) {
				if ((i & (1 << j)) > 0)
					list.add(arr[j]);
	
			}
			jumps = caljumps(n,k,list);
			if(jumps<=k){
				//cal min rebuilds
				minRebuilds = Math.min(minRebuilds, n-list.size());
			}
		}
		return minRebuilds;
	}

}

//4
//11 1
//300 300 300 300 200 200 300 300 100 100 300
//5 3
//100 100 100 100 3
//7 3
//10 20 40 10 10 30 30
//15 2
//30 30 60 60 90 90 60 60 30 30 100 100 100 100 3
