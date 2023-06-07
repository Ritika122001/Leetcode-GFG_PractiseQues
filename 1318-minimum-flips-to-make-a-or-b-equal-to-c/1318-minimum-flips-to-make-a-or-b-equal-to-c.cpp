class Solution {
public:
    int minFlips(int a, int b, int c) 
    {
        int ans = 0;
        while(a||b||c){
            int aa = a%2;
            int bb= b%2;
            int cc = c%2;
            if(cc==1){
                ans += (aa!=1&&bb!=1);
            }else{
                ans += ((aa==1)+(bb==1));
            }
            a/=2;
            b/=2;
            c/=2;
        }
        return ans;
        
    }
};