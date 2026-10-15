class Solution {
public:
    int numberOfMatches(int n) {
        int team = n;
        int match =0;
        while(team>1){
            if(team%2==0){
                match = team/2 + match;
                team = team/2;
                
            }else{
                match = ((team-1)/2) + match;
                team = ((team-1)/2) +1;
                
            }

        }

        return match;
        
        
    }
};