class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ma = INT_MIN;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]> ma){
                ma = nums[i];
            }

        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<ma){
                count = count + (ma-nums[i]);
            }
        }

        return count;
    }
};