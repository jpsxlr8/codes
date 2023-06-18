class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int>r,c;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!matrix[i][j]){
                    r.insert(i);// insert the ith row in row set
                    c.insert(j);// insert the jthrow in col set
                }
            }
        }
        for(auto &i:r){
            for(int j=0;j<n;j++){
                matrix[i][j]=0;// setting the mat values zero
            }
        }
        for(auto &i:c){
            for(int j=0;j<m;j++){
                matrix[j][i]=0; // setting the mat values zero
            }
        }
    }
};
