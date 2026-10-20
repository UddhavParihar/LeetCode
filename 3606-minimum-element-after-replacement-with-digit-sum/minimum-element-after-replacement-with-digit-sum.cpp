class Solution {
public:
    int minElement(vector<int>& nums) {
        int min =pow(10,4);
        int sum = 0;
        int last;
        for(int i = 0;i<nums.size();i++){
            while(nums[i]>0){
                last = nums[i]%10;
                sum = sum + last;
                nums[i] = nums[i]/10;
                
            }
            if(sum<min){
                min = sum;
            }
            sum = 0;

        }
        return min;
    }
};