class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) 
    {
        
        // int slope;
        
            vector<int>r1 = c[0];
            int x1 = r1[0];
            int y1 = r1[1];   
        
            vector<int>r2 = c[1];
            int x2 = r2[0];
            int y2 = r2[1];
        
        int dy1 = y2-y1;
        int dx1 = x2-x1;
            
        
        for(int i=2;i<c.size();i++)
        {
            int dx = c[i][0] - c[0][0];
            int dy = c[i][1] - c[0][1];
            if(dx*dy1 != dy * dx1)
            {
                return false;
            }
        
            
        }
        
        return true;
        
    }
};