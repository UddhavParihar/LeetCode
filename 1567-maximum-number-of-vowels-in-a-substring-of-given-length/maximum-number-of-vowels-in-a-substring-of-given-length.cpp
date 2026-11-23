class Solution {
public:
    int maxVowels(string s, int k) {
        int l = 0;
        int r = k-1;
        int count = 0;
        

        for(int i = l;i<=r;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count = count + 1;
            }
        }

        int ma = count;


        while(r<s.length()-1){
            if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u'){
                count--;
            }
            l++;
            
            r++;
            if(s[r]=='a'||s[r]=='e'||s[r]=='i'||s[r]=='o'||s[r]=='u'){
                count++;
            }

            ma = max(ma,count);
            
            
        }
        return ma;
    }
};