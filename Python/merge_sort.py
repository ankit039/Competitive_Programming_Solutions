

def mergeSort(arr): 
	if len(arr) >1: 
		mid = len(arr)//2 
		t1 = arr[:mid] 
		t2 = arr[mid:] 

		mergeSort(t1) 
		mergeSort(t2) 

		i = j = k = 0
		
		while i < len(t1) and j < len(t2): 
			if t1[i] < t2[j]: 
				arr[k] = t1[i] 
				i+=1
			else: 
				arr[k] = t2[j] 
				j+=1
			k+=1

		while i < len(t1): 
			arr[k] = t1[i] 
			i+=1
			k+=1
		
		while j < len(t2): 
			arr[k] = t2[j] 
			j+=1
			k+=1



l = list(map(int,input().split()))

mergeSort(l) 

print(l)
