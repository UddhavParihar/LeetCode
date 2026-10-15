class Solution {
public:
    bool isSameAfterReversals(int num) {
        string a = to_string(num);

        if(num==0){
            return true;
        }
        
        if(a[a.length()-1]=='0'){
            return false;
        }else{
            return true;
        }

        
    }
};