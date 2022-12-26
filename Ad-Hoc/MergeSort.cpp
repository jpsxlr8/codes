class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         m=(l+r)/2;
        int len1=m-l+1;
        int len2=r-m;
        // make two new array
        int *first_arr=new int[len1];
        int *second_arr=new int[len2];
        
        //copying values in both arrays
        int k=l;
        for(int i=0;i<len1;i++){
            first_arr[i]=arr[k++];
        }
        k=m+1;
        for(int i=0;i<len2;i++){
            second_arr[i]=arr[k++];
        }
        
        //merge two sorted arrays
        int index1=0;
        int index2=0;
        k=l;
        while(index1<len1 && index2<len2){
            if(first_arr[index1]<second_arr[index2]){
                arr[k++]=first_arr[index1++];
            }
            else{
                arr[k++]=second_arr[index2++];
            }
        }
        while(index1<len1){
            arr[k++]=first_arr[index1++];
        }
        while(index2<len2){
            arr[k++]=second_arr[index2++];
        }
        
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r){
            int m=(l+r)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
            
        }
    }
};
// TC: O(NlogN)
// SC: O(N)
