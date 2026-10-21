class Solution {
public:
    int minOperations(int n) {
        int ans;
        int sum = 0;
        if(n%2==0){
            ans = 1;
            for (int i=0;i<=(n/2)-1;i++){
                sum = sum + ans;
                ans = ans+2;
                

            }
            //sum = sum -1;
        }else if(n%2!=0){
            ans = 0;
            for(int i = 0;i<(n-1)/2;i++){
                ans = ans + 2;
                sum = sum + ans;
            }
        }

        return sum;
    }
};