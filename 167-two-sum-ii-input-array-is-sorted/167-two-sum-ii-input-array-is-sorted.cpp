class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        
        vector<int>ans;
        
        
        int l=0;
        int h = numbers.size()-1;
        while(l<=h)
        {
            
            
            if(numbers[l]+numbers[h]==target)
            {
                ans.push_back(l+1);
                ans.push_back(h+1);
                
                break;
            }
            
            else if(numbers[l] + numbers[h] > target)
            {
                h--;
                
                
            }
            
            else{
                
                l++;
            }
            
            
        }
        
        
        return ans;
        
        
        
        
        
        
        
    }
};