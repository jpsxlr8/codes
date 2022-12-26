class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
         if(low>=high){
             return;
         }
         int p=partition(arr,low,high);
         quickSort(arr,low,p-1);
         quickSort(arr,p+1,high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int pivot=arr[low];
        int count=0;
        for(int i=low+1;i<=high;i++){
            if(arr[i]<=pivot){
                count++;
            }
        }
        int pivotIndex=low+count;
        swap(arr[pivotIndex],arr[low]);
        
        int i=low,j=high;
        while(i<pivotIndex && j>pivotIndex){
            while(arr[i]<=pivot){
                i++;
            }
            while(arr[j]>pivot){
                j--;
            }
            if(i<pivotIndex && j>pivotIndex){
                swap(arr[i++],arr[j--]);
            }
            
        }
        return pivotIndex;
       
    }
};

// TC: O(NlogN)
// SC: O(NlogN)
