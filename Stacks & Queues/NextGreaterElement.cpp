class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long>st;
        vector<long long>ans;
        for(int i=n-1;i>=0;i--){
        if(st.size()==0)ans.push_back(-1);
        if(st.size()>0 && st.top()>arr[i])
        ans.push_back(st.top());
        else if(st.size()>0 && st.top()<=arr[i])
        {
            while(st.size()>0 && st.top()<=arr[i])st.pop();
            if(st.size()==0)ans.push_back(-1);
            else ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};
