// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
class Solution {
public:
    void func(vector<string>&ans,string curr,int open,int close,int n){
        // base case 
        if(curr.size()==2*n){
            ans.push_back(curr);
            return;
        }
        // inserting a opening bracket
        if(open<n){
            func(ans,curr+"(",open+1,close,n);
        }
        //inserting a closing bracket
        // it is possible only when closing brackets are smaller then opening brackets
        if(close<open){
            func(ans,curr+")",open,close+1,n);
        }
            
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        func(ans,"",0,0,n);
        return ans;
    }
};
