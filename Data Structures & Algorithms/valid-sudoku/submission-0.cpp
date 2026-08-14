class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<int, unordered_set<char>> squares;

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]!='.'){
                    char val=board[i][j];
                    if((rows[i].find(val)!=rows[i].end())||(cols[j].find(val)!=cols[j].end())||(squares[(i/3)*3+(j/3)].find(val)!=squares[(i/3)*3+(j/3)].end())){
                        return false;
                    }
                    else{
                        rows[i].insert(val);
                        cols[j].insert(val);
                        squares[(i/3)*3+(j/3)].insert(val);
                    }
                }
            }
        }
        return true;
    }
};
