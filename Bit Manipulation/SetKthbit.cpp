class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        if((n&(1<<k))!=0)
          return true;
        return false;
    }
};
