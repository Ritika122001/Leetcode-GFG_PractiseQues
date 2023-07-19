class Solution {
public:
   
   static bool cmp(vector<int> &a, vector<int> &b){
        return a[1]<b[1];
  
   }
    
    int eraseOverlapIntervals(vector<vector<int>>& intv) {
                      sort(intv.begin(),intv.end(),cmp);

         vector<int>ans = intv[0];
            int end = ans[1];
    int cnt=0;
     int strt = ans[0];
        for(int i=1;i<intv.size();i++)
        {
            if(intv[i][0] <  end)
            {
                cnt++;
              
            }
            else{
                end = intv[i][1];
            }
                               
        }
    
    return cnt;
    }

        
    
};