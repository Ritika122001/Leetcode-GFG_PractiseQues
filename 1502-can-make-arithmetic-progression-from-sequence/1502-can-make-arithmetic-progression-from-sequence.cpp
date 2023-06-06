class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        vector<int>r;
        unordered_set<int>st;
        for(auto c : arr)
        {
            st.insert(c);
            r.push_back(c);
        }
        
        sort(r.begin() ,r.end());


        
        int a = r[0];
        int an = r[arr.size()-1];
        int n = arr.size()-1;
        

        if( ((an-a) % n)!=0) return false;
        int d = (an-a)/(n);
        
        int i=0;
        while(i<r.size())
        {
            int num = a + i*d;
            if(st.find(num) == st.end())
            {
                return false;
            }
            i++;
            
        }
        
    return true;
        
//         int d = arr[1] - arr[0];
//         for(int i=2; i<arr.size();i++)
//         {
//             if(arr[i] - arr[i-1]!=d)
//             {
//                 return false;
//             }
//         }
        
        
//         return true;
    }
};