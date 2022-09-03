class Solution {
public:   vector<int> ans;
    
    void formNum(int num, int n, int k, int siz){
        if(siz == n){
            ans.push_back(num);
            return;
        }
        int temp = num%10;
        if(temp+k<=9)
            formNum(num*10+temp+k, n, k, siz+1);
        if(k!=0 && temp-k>=0)
            formNum(num*10+temp-k, n, k, siz+1);
    }

    
    vector<int> numsSameConsecDiff(int n, int k) {
         for(int i=1;i<=9;i++)
            formNum(i, n-1, k, 0);
        return ans;
    }
    



};