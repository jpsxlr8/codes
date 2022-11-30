class Solution{
public:
    int maxLength(string S){
        stack<int>st;
        st.push(-1);
        int count=0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='('){
                st.push(i);
            }
            else if(S[i]==')')
            {
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                   count=max(count,i-st.top()); 
                }
                
            }
        }
        return count;
    }
};