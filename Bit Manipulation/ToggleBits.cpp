class Solution {
  public:
    int toggleBits(int N ,int L ,int R) {
        for(int i=L-1;i<=R-1;i++){ // since the array given is 0-indexed 
            N=N^(1<<i); // xor operator works as toggler
        }
        return N;
        
    }
};
