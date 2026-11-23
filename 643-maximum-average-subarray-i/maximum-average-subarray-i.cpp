class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l = 0;
        int r = k-1;
        double sum = 0;
        double avg = 0;
        

        for(int i = 0;i<=r;i++){
            sum = sum + nums[i];
        }

        avg = sum / k;

        double max_avg = avg;

        while(r<nums.size()-1){
            sum = sum - nums[l];
            l++;
            r++;
            sum = sum + nums[r];
            avg = sum / k;

            max_avg = max(avg,max_avg);


        }

        return max_avg;
    }

    
};