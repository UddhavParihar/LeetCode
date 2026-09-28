class Solution {
public:
    int reverse(int x) {
        bool negative = false;
        long long revers = 0;
         long long n = x;
        if(n<0){
            n = n * -1;
            negative = true;
           
        }
        while(n>0){
            long long last = n%10;
            revers = last + (revers*10);
            n = n/10;
            
        }
        if(negative){
            revers = revers * -1;
        }
        if(revers > INT_MAX || revers < INT_MIN){
            return 0;
        }
        return revers;
        
    }
};