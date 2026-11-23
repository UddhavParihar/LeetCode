class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        int l = 0;
        int r = k-1;
        double sum = 0;
        double avg;

        for(int i = 0;i<=r;i++){
            sum = sum + arr[i];
        }

        avg = sum / k;

        if(avg>= threshold){
            count = count + 1;
        }

        while(r<arr.size()-1){
            sum = sum - arr[l];
            l++;
            r++;
            sum = sum + arr[r];
            avg = sum / k;

            if(avg>=threshold){
                count = count + 1;
            }

        
        }

        return count;
    }
};