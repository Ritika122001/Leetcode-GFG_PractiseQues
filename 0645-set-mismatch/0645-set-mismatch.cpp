class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        

        vector<int> res;
        vector<bool> v(nums.size(), false);
        for(auto a: nums){
            if(v[a-1]==true){
                res.push_back(a);
            } else {
                v[a-1] = true;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(v[i]==false) {
                res.push_back(i+1);
                break;
            }
        }
        return res;
  
    }
};