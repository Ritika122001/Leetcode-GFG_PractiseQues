class Solution {
public:
   int r,c;
    bool check( int x, int y){  
        return ( x>=0 && x<r && y>=0 && y<c);
    }
    int sol( vector< vector< int> > &g, int x, int y) {
        if( x>=r) return y;                
        if( !check(x,y)) return -1;            
        
        if( check( x, y+g[x][y]) && g[x][y]==g[x][y+g[x][y]] ){
            return sol( g,x+1,y + g[x][y]);
        }
        else return -1; 
    }
    vector<int> findBall(vector<vector<int>>& g) {
        r=g.size();
        c=g[0].size();
        vector< int> ans(c);
        for( int i=0;i<c;i++){
            ans[i]=( sol(g,0,i));
        }
        return ans;
    }
};