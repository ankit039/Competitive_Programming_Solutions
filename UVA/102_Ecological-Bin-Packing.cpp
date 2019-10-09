#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int arr[9], total[6], min, index, sumTotal;
	string letter[] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};

	while(scanf("%d", &arr[0])==1)
	{
		min = 0xFFFFFFFF;
		sumTotal = arr[0];
		for(int i=1; i<9; i++){
			scanf("%d", &arr[i]);
			sumTotal += arr[i];
		}
		
		total[0] = arr[0]+arr[5]+arr[7];
		total[1] = arr[0]+arr[4]+arr[8];
		total[2] = arr[2]+arr[3]+arr[7];
		total[3] = arr[2]+arr[4]+arr[6];
		total[4] = arr[1]+arr[3]+arr[8];
		total[5] = arr[1]+arr[5]+arr[6];
		
		for(int i=0; i<6; i++){
			if(total[i] > min){
				min = total[i];
				index = i;
			}
		}
		
		cout << letter[index] << " " << sumTotal-min << endl;
	}

	return 0;
}
