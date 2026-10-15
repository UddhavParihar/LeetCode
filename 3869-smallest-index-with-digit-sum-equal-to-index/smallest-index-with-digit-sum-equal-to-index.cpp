class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        int last = 0;
        for(int i=0;i<nums.size();i++){
            int sum = 0;
            while(nums[i]>0){
                int last = nums[i]%10;
                sum = last + sum;
                nums[i] = nums[i]/10;
            }
            if(sum == i){
                return i;
            }
        }

        return -1;
    }
};