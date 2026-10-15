class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int count1 = 0;
        int prev = 0;
        int ans = 0;
        for(int i = 0;i<bank.size();i++){
            for(int j = 0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    count1 = count1 + 1;

                }
            }

            if(count1==0){
                   // prev=count1;
                    count1 = 0;
                }else{
                    ans = ans + (prev*count1);
                    prev = count1;
                    count1 = 0;

                }

        }
        return ans;
    }
};