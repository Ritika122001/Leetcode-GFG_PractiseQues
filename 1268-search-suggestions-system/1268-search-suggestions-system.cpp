class Solution {
public:
   vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        int n=products.size();
        sort(products.begin(),products.end());
        vector<vector<string>>ans;
        vector<string>t;
        string curr="";
        for(auto c:searchWord){
            curr+=c;               
            t.clear();        
            for(int i=0;i<n;i++){
                string s=products[i];
                if(s.substr(0,curr.length())==curr){             
                    t.push_back(s);
                }
                if(t.size()==3)break;        
            }
            ans.push_back(t);
        }
        return ans;
    }
};