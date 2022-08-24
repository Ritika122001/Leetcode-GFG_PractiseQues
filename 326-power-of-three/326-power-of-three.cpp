class Solution {
public:
    bool isPowerOfThree(int n) {
        
//         Largest power of 3 in the range approach
//         1162261467 maximum value of power of 3 --> 3^19 lies in the range of 2^31-1;
        return n>0 and 1162261467%n==0;
        
       
//         convert to base 3 approach
        
        
//         if(n<1) return false;
        
//         string nbasethree = "" ;
        
//         while(n!=0)
//         {
            
//             nbasethree+=to_string(n%3);
//             n/=3;
            
//         }
        
        
//         int i = 0;
        
//         while(i<nbasethree.length()-1)
//         {
//             if(nbasethree[i]!='0')
//             {
//                 return false;
//                 }
            
//             i++;
//         }
        
//         return nbasethree[i]=='1';
        
        
        // Recursion approach
        
//             if(n==1)
//         {
//             return true;
//         }
        
//        if(n<1) return false;
  
//        if(n%3!=0) return false;
        
       
        
//         return isPowerOfThree(n/3);
        
    }
};