class Solution {
public:
    bool find132pattern(vector<int>& nums) {
      
    // for(int i=0;i<nums.size();i++)
    // {
      
//       int mini = nums[0];
//       for(int j = 1 ; j<nums.size();j++)
//       {
//         for(int k= j +1 ; k<nums.size();k++)
//         {
//           if(mini < nums[k] and nums[j] > nums[k] )
//           {
//             return true;
//           }
          
//           mini = min(mini,nums[j]);
//         }
//       }
 
      
      
//       return false;
  
     
      stack <int> stack;
        int second =  INT_MIN;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums [i] < second)
                return true;
            while (stack.size() >0 && nums [i] > stack.top()){
                second = stack.top ();
                stack.pop();
            }
                
            stack.push (nums [i]);
        }
        return false;
        
    }
};
