class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[26] = {0};

        for(int i = 0; i < magazine.size(); i++){
            hash[magazine[i] - 'a']++;
        }

        for(int i = 0; i < ransomNote.size(); i++){
            hash[ransomNote[i] - 'a']--;

            if(hash[ransomNote[i] - 'a'] < 0){
                return false;
            }
        }

        return true;
    }
};


// class Solution {
// public:
//     bool canConstruct(string ransomNote, string magazine) {
//         int hash1[26] = {0};
//         int hash2[26] = {0};

//         for(int i = 0;i<ransomNote.size();i++){
//             hash1[ransomNote[i]-'a']++;
//         }

//         for(int i = 0;i<magazine.size();i++){
//             hash2[magazine[i]-'a']++;
//         }

//         for(int i = 0;i<26;i++){
//             if(hash1[i]>hash2[i]){
//                 return false;
//             }
//         }

//         return true;
//     }
// };