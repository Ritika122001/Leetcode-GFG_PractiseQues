class Solution {
public:
    string reverseWords(string s) {
        
        
        int j=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                cout<<i << " "<< j << endl;
                reverse(s.begin()+j , s.begin()+i);
                j=i+1;   
            }
       
        }
        
        reverse(s.begin()+j , s.end());
        
        return s;
        
        
        
//         stack<char>st;
        
//         for(int i=0;i<s.length();i++)
//         {
//             if( (s[i]>='a' || s[i]<='z') and (s[i]>='A' || s[i]<='Z')) 
//             {
//                  st.push(s[i]);
//             }
//             else
//             {
//                 st.push(' ');
//             }
           
//         }
        
//         string res;
//         while(!st.empty())
//         {
//             res.push_back(st.top());
//             st.pop();
            
//         }
        
//         int l=0;
//         int h=res.length();
//         while(l<=h)
//         {
            
//             while((s[l]>='a' || s[l]<='z') and (s[l]>='A' || s[l]<='Z'))
//             {
//                 l++;
//             }
            
//             while((s[h]>='a' || s[h]<='z') and (s[h]>='A' || s[h]<='Z'))
//             {
//                 h--;
//             }
            
//             swap()
            
//         }
            
        
//         return res;
        
    }
};