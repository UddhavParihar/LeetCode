class Solution {
public:
    vector<int> sumZero(int n) {
        int pos = 1;
        int neg = -1;
        vector<int> ans;
        if(n==1){
            ans.push_back(0);
            return ans;
        }
        if(n%2==0){
            for(int i=1;i<=n/2;i++){
                ans.push_back(pos);
                ans.push_back(neg);
                pos++;
                neg--;
            }
            
        }else if(n%2!=0){
            ans.push_back(0);
            for(int i=0;i<n/2;i++){
                ans.push_back(pos);
                ans.push_back(neg);
                pos++;
                neg--;
            }

        }

        return ans;
    }
};