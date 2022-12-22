class Solution
{
public:
    int setKthBit(int N, int K)
    {
       // we've to the kth bit means if kth bit is unset we have to set it
       // if the kth bit is set we've to leave it
       // we can think of OR operator since it gives value 1 with both 0 and 1 input
       return N|(1<<K);
       
    }
    
};
