class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int count = 0;
        int last = 0;
        for(int i=0;i<nums.size();i++){
            count = count + nums[i];

            while(nums[i]>0){
                last=nums[i]%10;
                sum = sum + last;
                nums[i]=nums[i]/10;

            }


        }

        return abs(count - sum);
    }
};