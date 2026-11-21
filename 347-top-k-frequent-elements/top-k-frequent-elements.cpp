class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int ma = 0;
        int arr;
        vector<int>ans;

        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(int i = 0;i<k;i++){
            for(auto it : mpp){
                if(it.second>ma){
                    ma = it.second;
                    arr = it.first;

                }
            }
            ans.push_back(arr);
            mpp.erase(arr);
            ma = 0;

        }

        return ans;

        
    }
};