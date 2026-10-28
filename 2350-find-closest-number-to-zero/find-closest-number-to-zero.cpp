class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int small = INT_MAX;
        int val = 0;
        for(int i = 0;i<nums.size();i++){
            if(abs(nums[i])<small){
                small = abs(nums[i]);
                val = nums[i];

            }
            if(abs(nums[i])==abs(val)){
                if(val<=nums[i]){
                    val = nums[i];
                }
            }

            

        }


        if(val<small){
            return val;

        }
        return small;
    }
};