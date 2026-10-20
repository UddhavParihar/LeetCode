class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            count = count + nums[i];
        }
        if(count%k==0){
            return 0;
        }else if(count<k){
            return count;
        }else{
            return (count%k);
        }
    }
};