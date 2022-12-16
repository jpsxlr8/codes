// Given an array arr[ ] of length N consisting cost of N toys and an integer K depicting the amount with you. Your task is to find maximum number of toys you can buy with K amount.

class Solution{

public:

    int toyCount(int N, int K, vector<int> arr)
    {
       int count_toys=0;
       sort(arr.begin(),arr.end());
       for(int i=0;i<N;i++){
           if(K>=arr[i]){
               count_toys++;
               K-=arr[i];
           }
           else
           break;
           
       }
       return count_toys;
       }
};
