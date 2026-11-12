class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ma = INT_MIN;
        int score = 0;
        for(int i = 0;i<nums.size();i++){
            sort(nums[i].begin(),nums[i].end(),greater<int>());
        }


        for(int j = 0;j<nums[0].size();j++){
            for(int i = 0;i<nums.size();i++){
                if(nums[i][j]>ma){
                    ma = nums[i][j];
                }
            }
            score = score+ ma;
            ma = INT_MIN;

        }
        

        

        return score;
    }
};