class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        int num;

        while(n>0){
            num = n % 10;
            sum = num + sum;
            prod = num * prod;
            n = n /10;
            
        }

        return(prod - sum);
        
    }
};