class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int min = INT_MAX;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum = nums[i] + sum;
            if(sum<min){
                min = sum;
            }
        }
        if(min>0){
            return 1;
        }else{
            return(abs(min)+1);

        }
        
    }
};