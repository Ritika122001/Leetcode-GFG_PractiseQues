class NumMatrix {
    

public:
       vector<vector<int>>temp;
   
    NumMatrix(vector<vector<int>>& matrix) {
        if(matrix.size()==0)
        {
            return ;
        }
        
                int r = matrix.size();
        int c = matrix[0].size();

        temp = vector<vector<int>>(r + 1, vector<int>(c + 1, 0));
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                temp[i][j] = temp[i-1][j] + temp[i][j-1] - temp[i-1][j-1] +  matrix[i-1][j-1] ;
            }
        }
        
    
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
//        int sum=0;
        
//        for(int i=row1;i<=row2;i++)
//        {
//            for(int j=col1;j<=col2;j++)
//            {
//                sum+=temp[i][j];
//            }
//        }
        
//         return sum;
        
        
        
        
        return temp[row2+1][col2+1] - temp[row2+1][col1] - temp[row1][col2+1] + temp[row1][col1]; 
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */