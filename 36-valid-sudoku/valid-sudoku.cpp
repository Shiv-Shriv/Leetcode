class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> columns(9);
        vector<unordered_set<char>> boxes(9);

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){

                char num = board[i][j];

                if(num=='.'){
                    continue;
                }

                int box = (i/3)*3 + j/3;

                if(rows[i].count(num)==1||columns[j].count(num)==1||boxes[box].count(num)==1){
                    return false;
                }
                
                rows[i].insert(num);
                columns[j].insert(num);
                boxes[box].insert(num);
            }
        }
        return true;
    }
};