class Solution {
public:
     bool isValidRow(vector<vector<char>>&board){
        for(int i=0;i<9;i++){
          set<char>tempset;
          for(int j=0;j<9;j++){
          if(board[i][j]=='.') continue;
           if(tempset.count(board[i][j])) return false;
            tempset.insert(board[i][j]);         
          }
        }
        
return true;
     }
    
    bool isValidCol(vector<vector<char>>&board){
        for(int i=0;i<9;i++){
          set<char>tempset;
          for(int j=0;j<9;j++){
          if(board[j][i]=='.') continue;
           if(tempset.count(board[j][i])) return false;
            tempset.insert(board[j][i]);         
          }

    }
    return true;
    }
    bool isValidSmallSudoku(vector<vector<char>>&board){
       for(int row=0;row<9;row+=3){
          for(int col=0;col<9;col+=3){
            set<char>tempset;
            for(int i=0;i<3;i++){
              for(int j=0;j<3;j++){
               char val =board[row+i][col+j];
               if(val=='.')continue;
               if(tempset.count(val))return false;
               tempset.insert(val);
              }
            }
           
          }
      
    }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
       if(isValidRow(board)&&isValidCol(board)&&isValidSmallSudoku(board))return true;
       return false;
    }
};
