class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int miss = 0;
        int count = 0;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum = sum + nums[i];
            count = count + 1;
            

        }
        miss = (count*(count+1)/2) - sum;
        return miss;
        
    }
};