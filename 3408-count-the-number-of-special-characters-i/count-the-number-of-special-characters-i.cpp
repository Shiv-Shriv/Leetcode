class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> upper(26, 0);
        vector<bool> lower(26, 0);
        int count = 0;

        for(char c : word){
            if(islower(c)){
                lower[c - 'a'] = 1;
            }
            else{
                upper[c - 'A'] = 1;
            }
        }

        for(int i=0; i<26; i++){
            if(upper[i]&&lower[i]){
                count++;
            }
        }
        return count;
    }
    };