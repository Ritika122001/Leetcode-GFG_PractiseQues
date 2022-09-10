class Solution {
 
public:

    
    void solveR(vector<int>&ansr , vector<int>&A)
{
       stack<pair<int,int>>st;

    for(int i=A.size()-1;i>=0;i--)
    {
        while(!st.empty() and A[i]<=st.top().first)
        {
            st.pop();
            
        }
           st.empty() ?  ansr.push_back(A.size()) : ansr.push_back(st.top().second);
        st.push({A[i],i});
    }
    

}

    
    
    
void solveL(vector<int>&ansl , vector<int>&A)
{
    
       stack<pair<int,int>>st;
    for(int i=0;i<A.size();i++)
    {
        while(!st.empty() and A[i]<=st.top().first)
        {
            st.pop();
            
        }
        
           st.empty() ?  ansl.push_back(-1) : ansl.push_back(st.top().second);
        
        st.push({A[i],i});
    }
    

}
    
    
    
 int largestrect(vector<int>&A)
 {
    vector<int>ansl;
    vector<int>ansr;
    solveL(ansl,A);
    solveR(ansr,A);  
    reverse(ansr.begin(),ansr.end());
    vector<int>area(A.size());
    vector<long long int>width(A.size());;
     int maxi=INT_MIN;
        for(int i=0;i<width.size();i++)
        {
            width[i] = abs ( ansr[i]-ansl[i]-1 ); 
        }
        
        
      
        for(int i=0;i<area.size();i++)
        {
            area[i] = width[i] * A[i];
        }
         
         
        for(int i=0;i<area.size();i++)
        {
            maxi = max(area[i],maxi);
        }
    
    return maxi;
        
 }
    
    
 int maximalRectangle(vector<vector<char>>& matrix) {
     
     int n=matrix.size();
     
  int m = matrix[0].size();
  int ans = INT_MIN;
    vector<int> arr(m,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]=='1')
            {
                arr[j]++;
            }
            else 
            {
                arr[j] = 0;
            }
        }
        
        for(int i=0;i<m;i++)
        {
            cout<<arr[i]<<" ";
            
        }
        cout<<endl;
        cout<<largestrect(arr)<<endl;
        ans = max(ans,largestrect(arr));
    }
    return ans;
    }
};