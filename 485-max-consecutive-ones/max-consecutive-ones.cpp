class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int prev = 0;
        int count = 0;
        for(int i = 0 ; i<nums.size();i++){
            if(nums[i]==1){
                count = count + 1;

            }else if(nums[i]==0){
                if(count>prev){
                    prev = count;

                }
                
                count = 0;
                
            }

        }
        if(count>prev){
            return count;
        }else{
            return prev;

        }
        

        
    }
};