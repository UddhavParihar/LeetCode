class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse = 0;
        long long og = x;
        
        if(x<0){
            return false;
        }else{
            while(x>0){
                long long last = x%10;
                reverse = last + (reverse*10);
                x = x / 10;
            }
            
        }
        if(reverse == og){
                return true;
            }else{
                return false;
            }
        
    }
};