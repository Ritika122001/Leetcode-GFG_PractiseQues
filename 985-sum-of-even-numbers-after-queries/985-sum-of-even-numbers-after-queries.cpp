class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q)
    {
        
//     unordered_map<int,int>mp;
//     for(int i=0;i<nums.size();i++)
//     {

//         mp[i] = nums[i];
         
//     }
        
//       vector<int>res; 
//       for(auto c : queries)
//       {
          
//          int val = c[0];
//          int idx = c[1];
//          nums[idx]+=val;
//          mp[idx] = nums[idx];
//          int sum=0;
//           for(auto c: mp){
//               if(c.second%2==0)
//               {
//                   sum+=c.second;
//               }
//           }
// //           for(int i=0;i<nums.size();i++)
// //           {
              
// //               if(nums[i]%2==0)
// //               {
// //                   sum+=nums[i];
// //               }
              
// //           }
          
//           res.push_back(sum);
//       }
        
//         return res;
            
        
        int even=0;
		for(int i=0;i<nums.size();i++)
		{
			if(nums[i]%2==0)
			{
				even+=nums[i];
			}
		}
		vector<int>ans(nums.size());
		for(int i=0;i<q.size();i++)
		{
			if(nums[q[i][1]]%2==0)
			{
				even-=nums[q[i][1]];
			}
			int val=nums[q[i][1]]+q[i][0];
			if(val%2==0)
			{
				even+=val;
			}
			ans[i]=even;
			nums[q[i][1]]+=q[i][0];
		}
		return ans;
    }
};