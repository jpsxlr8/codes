class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        if(m==n) return -1; // if both nos are same then all their bits will be same
        int index=0;
        int ans=m^n;// ans will have 0 bits where bits of m&n are same and 1 bit where both are different
        while(ans>0){
            index++;
            if(ans&1==1){ // it means ith bit having 1 will reach rightmost point which is our answer
                return index;
            }
            
            
            ans=ans>>1;
        }
        
    }
};
