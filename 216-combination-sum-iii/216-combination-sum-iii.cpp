class Solution {
    
    vector<vector<int>> arr;
    
public:
    
    int sum(vector<int>& combination){
        int ans = 0;
        for(auto x: combination){
            ans += x;
        }
        return ans;
    }
    
    void Helper(int k, int n, vector<int>& combination, int num){
        
        if(k == 0){
            if(sum(combination) == n ){
                arr.push_back(combination);
            }
            return;
        }
        
        if(num > 9) return;
        
        combination.push_back(num);  // Including num in combination
        Helper(k - 1, n, combination, num + 1);
        combination.pop_back(); // Not including num in combination
        Helper(k, n, combination, num + 1);    
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> combination;
        Helper(k, n, combination, 1);
        return arr;
        
    }
};