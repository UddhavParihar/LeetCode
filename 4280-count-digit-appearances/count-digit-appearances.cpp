class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int last_digit = 0;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            while(nums[i]>0){
                last_digit = nums[i] % 10;
                if(last_digit == digit){
                    count = count +1;

                }
                nums[i]=nums[i]/10;
            }
        }

        return count;


        
    }
};