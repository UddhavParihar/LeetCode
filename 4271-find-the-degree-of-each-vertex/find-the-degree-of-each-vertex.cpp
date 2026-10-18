class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        int count = 0;
        for(int i = 0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==1){
                    count = count+1;
                }
                

            }
            ans.push_back(count);
            count = 0;
        }
        return ans;
    }
};