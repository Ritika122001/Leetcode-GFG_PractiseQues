class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        // sort(nums.begin(),nums.end());
        
        // int ans;
        // // int xorr = nums[0];
        
        // for(int i=1;i<nums.size();i++)
        // {
        //     if ( (nums[i] ^ nums[i-1]) ==0 )
        //     {
        //         ans = nums[i];
        //         break;
        //     }
        // }
        
        // return ans;
        
//         for(int i=1;i<nums.size();i++)
//         {
//             xorr^=nums[i];
            
//         }
        
//         for(int i=1;i<nums.size();i++)
//         {
//             xorr^=i;
            
//         }

    int i=0;
        while(i<nums.size())
        {
            if(nums[i]!=i+1)
            {

               if(nums[i]==nums[nums[i]-1])
               {
                   i++;
               }

               else{
                                   swap(nums[i],nums[nums[i]-1]);

                
               }
            }

        else{
            i++;
        }
        }

        for(int i=0;i<nums.size();i++){
          if(nums[i]!=i+1) return nums[i];
        }
        return -1;

     

    }
};