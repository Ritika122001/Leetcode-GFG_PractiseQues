class Solution {
public:
 
    int numberOfWeakCharacters(vector<vector<int>>& prop) {
      
            sort(prop.begin(),prop.end(),[](const vector<int> &a,const vector<int>&b){
            return a[0]==b[0] ? a[1]<b[1]:a[0]>b[0];
        });
        int cnt=0;
        
        // for(int i=0;i<prop.size();i++)
        // {
        //     cout<<prop[i][0] <<" "<<prop[i][1]<< endl;
        // }
        
        int maxi=INT_MIN;
        
        for(int i=0;i<prop.size();i++)
        {
            // cout<<prop[i][1];
            if(maxi > prop[i][1])
            {
                cnt++;
                
            }
            
            else{
                maxi=prop[i][1];
            }
        }
        
        
        
        return cnt;
      
    }
};