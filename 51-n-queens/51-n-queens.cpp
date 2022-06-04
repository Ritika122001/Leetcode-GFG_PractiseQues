class Solution {
       vector<vector<string>>res;
public:
 
    
    
    bool isvalid(int row, int col, vector<string>&board)
    {
        
        
        for(int i=row-1;i>=0;i--)
        {
            if(board[i][col]=='Q')
            {
                return false;
            }
        }
        
        for(int i=row-1 , j = col-1 ; i>=0 and j>=0 ; i-- ,j--)
        {
            if(board[i][j]=='Q')
            {
                return false;
            }
        }
     
        
        for(int i = row-1 , j = col+1 ;i>=0 and j<board.size(); i-- ,j++)
        {
              if(board[i][j]=='Q')
            {
                return false;
            }
        }
        
        return true;
        
        
        
        
        
        
    }
    
    void solve(int n ,vector<string>&board , int row )
    {
        
        if(row==board.size())
        {
            res.push_back(board);
            return;
        }
         
          for(int j=0;j<board.size();j++){
              
              
              if(isvalid(row,j,board))
                 {
                     
                board[row][j] = 'Q';
                solve(n,board,row+1);
                 board[row][j] = '.';
                     
                 }
                 
                 }
                 
                 }
       
    
    
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<string> board(n, string(n, '.'));

        
        
        solve(n,board,0);
        return res;
        
    }
};