class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> balloon;
        for(int i=0; text[i]!='\0'; i++){

            if(text[i]=='b'){
                balloon['b']++;
            }
            if(text[i]=='a'){
                balloon['a']++;
            }
            if(text[i]=='l'){
                balloon['l']++;
            }
            if(text[i]=='o'){
                balloon['o']++;
            }
            if(text[i]=='n'){
                balloon['n']++;
            }
        }

        return min({balloon['a'], balloon['b'], balloon['l']/2, balloon['o']/2, balloon['n']});
    }
};