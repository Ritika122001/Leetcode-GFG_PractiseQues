class Solution {
public:
    
    bool solve(int i, int j , vector<vector<char>>&board , string word ,int ind)
    {
        
        if(ind==word.size())
        {
            return true;
        }
        
        
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]=='$' || word[ind] != board[i][j])
        {
            return false;
        }
        
        char ch = board[i][j];
        board[i][j]='$';
        
    
            bool op1 =  solve(i,j+1,board,word,ind+1);
      
        
        
            bool op2 =  solve(i,j-1,board,word,ind+1);
       
        
       
           bool op3 =   solve(i+1,j,board,word,ind+1);
        
       
            bool op4 =  solve(i-1,j,board,word,ind+1);
       
        
        
        board[i][j]=  ch;
        
        return op1 || op2 || op3 ||op4;
        
        
        
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
     for(int i=0;i<board.size();i++)
     {
         for(int j=0;j<board[0].size();j++)
         {
             if(board[i][j]==word[0])
             {
                 if(solve(i,j,board,word,0))
                 {
                     return true;
                 }
             }
         }
     }
        
        
        return false;
    }
};