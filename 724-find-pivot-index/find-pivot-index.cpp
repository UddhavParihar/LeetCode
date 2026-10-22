class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            count = count + nums[i];
            nums[i] = count;
            
        }
        
        if(nums[0] == nums[nums.size()-1]) return 0;
        
        for(int j = 1;j<nums.size();j++){
            if(nums[j-1]==nums[nums.size()-1] - nums[j]){
                return j;
            }
        }
        
        return -1;
    }
};