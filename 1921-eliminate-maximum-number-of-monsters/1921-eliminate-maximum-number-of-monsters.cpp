class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        
        
        vector<double>time(dist.size());
        
        
        for(int i=0;i<dist.size();i++)
        {
            time[i] =  ( (double) dist[i] / (double)speed[i] ); 
        }
        
        sort(time.begin() , time.end());
        
        for(int i=0;i<time.size();i++)
        {
            cout<<time[i] <<" ";
        }
        
        int res=0;
        int t=0;
        for(auto c : time)
        {
            
            if(c>t)
            {
                res++;
                t++;
                
            }
            
            else{
                break;
            }
        }
        
        return res;
        
    }
};