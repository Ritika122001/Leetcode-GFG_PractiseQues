class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        set<string>st;   
        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
            st.insert(words[i]);
        }
        int flag=1;
        
        int ans=0;
        
        for(int i=0;i<words.size();i++)
        {
        
            string s = words[i];
            string rev=words[i];
            reverse(s.begin(), s.end());
            if(rev!=s and mp[s]>0 and mp[rev]>0)
            {
                ans+=4;
                mp[s]--;mp[rev]--;
                
            }
            
            else if(rev==s and mp[rev]>1)
            {
                ans+=4;
                mp[s]-=2;
            }
            
            else if(rev==s and mp[rev]>0 and flag==1)
            {
               ans+=2;
                mp[rev]--;
                flag=0;
            }
        }
        

        return ans;
    }
};

