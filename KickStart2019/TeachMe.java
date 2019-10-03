//O(2^5 * N) Solution for passing both the test cases

import java.util.*;
import java.io.*;
class Solution
{
  
		public static void main(String[] args) {
		// TODO Auto-generated method stub'	
		try{
			
		
		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
		
		int T = Integer.parseInt(br.readLine().trim());
		
		for (int i = 1; i <= T; i++) {
			String arr[] = br.readLine().trim().split(" ");
			int N = Integer.parseInt(arr[0]);
			
			int mi[] = new int[N+1];  //defining m(i) as the number of employees who can mentor the i-th employee
			int S = Integer.parseInt(arr[1]);
			
			HashMap<Integer,ArrayList<Integer>> map = new HashMap<Integer,ArrayList<Integer>>();
			
		    HashMap<ArrayList<Integer>,Integer> mMap = new HashMap<ArrayList<Integer>,Integer>();
			
			for(int j =1;j<=N;j++){
				ArrayList<Integer> arrlist = new ArrayList<Integer>();
				String arr2[] = br.readLine().trim().split(" ");
				
				for(int k = 1 ;k <arr2.length ; k++){
					arrlist.add(Integer.parseInt(arr2[k]));
				}
				
				Collections.sort(arrlist);
				
				map.put(j, arrlist);
				if(!mMap.containsKey(arrlist))
					mMap.put(arrlist, 1);
				else{
					mMap.put(arrlist, mMap.get(arrlist)+1);
				}
				
			}
			

		
			//Do something
			long y = calPairs(N,map,mi,sMap,mMap);
			System.out.println("Case #"+i+": "+y);
		}
	}
		
	catch(Exception e){
		e.printStackTrace();
	}

	}
	
	static long calPairs(int N , HashMap<Integer,ArrayList<Integer>> map , int[] mi ,HashMap<ArrayList<Integer>,Integer> mMap){
		long sum=0;
		
		for(int i = 1 ; i<=N ;i++){
			mi[i] = 0;
			ArrayList<Integer> arr = map.get(i);
			int n = arr.size();
			int sum2 =0;
			for (int j = 0; j < (1<<n); j++){
				ArrayList<Integer>  list = new ArrayList<Integer>();
				for (int k = 0; k < n; k++) {
					if ((j & (1 << k)) > 0)
						list.add(arr.get(k));
				}
				if(mMap.containsKey(list)){
					sum2 += mMap.get(list);
				}
				
			}	
			mi[i] = N-sum2;
		}
	
		
		for(int j : mi){
			sum += j;
		}
		return sum;
	}
	
}
