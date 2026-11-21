class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        long long sum = 0;
        unordered_map <long long,int>mpp;
        int ma = 0;
        for(int i = 0;i<wall.size();i++){
            for(int j = 0;j<wall[i].size()-1;j++){
                sum = wall[i][j] + sum;
                //wall[i][j] = sum;
                mpp[sum]++;
                
            }
            sum = 0;

        }

        for(auto it : mpp){
            if(it.second>ma){
                ma = it.second;
            }

        }

        

        return wall.size() - ma;
    }
};