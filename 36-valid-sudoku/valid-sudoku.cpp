class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            unordered_set<char> mp;
        for(int j=0; j<9; j++){
            if(board[i][j] == '.') continue;
            if(mp.find(board[i][j])==mp.end()){
                mp.insert(board[i][j]);
            }
            else{
                return false;
            }
        }
        }

        for(int j=0; j<9; j++){
            unordered_set<char> mp;
        for(int i=0; i<9; i++){
            if(board[i][j] == '.') continue;
            if(mp.find(board[i][j])==mp.end()){
                mp.insert(board[i][j]);
            }
            else{
                return false;
            }
        }
        }

        for(int i=0; i<9; i+=3){
            for(int j=0; j<9; j+=3){
                unordered_set<char>mp;

                for(int l=i; l<i+3; l++){
                    for(int r=j; r<j+3; r++){
                        if(board[l][r] == '.') continue;
                        if(mp.find(board[l][r])==mp.end()){
                            mp.insert(board[l][r]);
                        }
                        else{
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};