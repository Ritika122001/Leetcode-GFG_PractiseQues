class Solution {
public:
  
  
  bool search(int i , int j , int mid, vector<vector<int>>& h, int pre , vector<vector<int>>&v )
  {
    
    
    int  n = h.size();
    int m = h[0].size();
    
    if(i<0 || j<0 || i>=n || j>=m || v[i][j] == true)
             return false;
    
    if(i==n-1 and j==m-1 and abs(h[i][j] -pre) <= mid)
    {
      return true;
    }
    
    if(abs(h[i][j]  - pre) > mid)
    {
      return false;
    }
    
    
    v[i][j]=1;
    
  return search(i-1,j,mid,h,h[i][j],v) || search(i+1,j,mid,h,h[i][j],v) || search(i,j-1,mid,h,h[i][j],v) || search(i,j+1,mid,h,h[i][j],v);
  
    
    
    
  }
    int minimumEffortPath(vector<vector<int>>& heights) {
      
      int l =0 ;
      int h =1e6;
      int ans = INT_MAX;
      
      
      
      while(l<=h)
      {
        int mid = l + (h-l)/2;
        
         vector<vector<int>>v(heights.size() , vector<int>(heights[0].size() , 0));
        
        if(search(0,0,mid,heights,heights[0][0],v))
        {
          ans=min(ans,mid);
          h = mid-1;
          
        }
        
        else{
          l=mid+1;
        }
      }
      
      return ans;
        
    }
};