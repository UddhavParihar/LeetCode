class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]%3==0 && nums[i]%2==0){
                sum = nums[i] + sum;
                count = count + 1;
            }
        }

        if(count != 0){
            return sum/count;
        }else{
            return 0;
        }
    }
};