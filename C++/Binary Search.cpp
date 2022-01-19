int binarySearch(int arr[],int size,int element){
    int low,mid,high;
    low = 0;
    high = size-1;

    while(low<=high){
        mid = (low + high)/2;
        if (arr[mid] == element)
        {
            cout<<"OK\n";
            cout<<"The element "<<element<<" was foung on index: "<<mid<<endl;
            return mid;
        }
        if (arr[mid]<element){
            low = mid+1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout<<mid<<endl;
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    int element = 9;
    int searchIndex = binarySearch(arr,size,element);
// cout<<"The element "<<element<<" was foung on index: "<<mid<<endl;
return 0;
}
