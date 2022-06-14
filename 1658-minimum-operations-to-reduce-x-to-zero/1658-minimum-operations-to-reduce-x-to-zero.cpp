class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        
//         int l=0;
//         int h = nums.size()-1;
//         int cnt=0;
        
//         while(l<=h)
//         {
            
//             if(nums[l]>X) l++;
//             if(nums[h]>X) h--;
            
//           else if(X-nums[l] > X-nums[h])
//           {
//                 X-=nums[h];
//               h--;
//               cnt++;
//           }
            
//             else
//             {
//                 X-=nums[l];
//                 l++;
//                 cnt++;
//             }
            
            
            
            
//         }
        
//         if(cnt!=0 and X==0)
//         {
//             return cnt;
//         }
        
//         return -1;
        
         int arrSum = 0, target;
        
        for(int num : nums)
            arrSum += num;
        if(x > arrSum) return -1;
        
        target = arrSum - x;        
        int left = 0, right = 0, n = nums.size(), sum = 0, len = -1;
        for( ; right < n; right++) {
            sum += nums[right];
            while(sum > target)
                sum -= nums[left++];
            if(sum == target) len = max(len, right - left + 1);
        }
        
        return len == -1 ? -1 : n - len;
        
    }
};