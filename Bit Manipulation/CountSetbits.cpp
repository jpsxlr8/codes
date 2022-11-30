include <bits/stdc++.h>
using namespace std;
 
/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
 

int main()
{
    int i = 7;
    cout << countSetBits(i);
    return 0;
}

// Time Complexity: O(log n) 
// Auxiliary Space: O(1)