class Solution {
public:
    bool isPowerOfFour(int n) {
        
//         if(n==1)
//         {
//             return true;
//         }
        
//         if(n%4==0)
//         {
//             while(n%4==0)
//         {
//             n/=4;
            
//         }
            
//          if(n==1)
//         {
//             return true;
//         }
            
//          else
            
//             return false;
            
//         }
        
//         else
//              return false;
        
   
        if(n<1 || (n>1 and n%4>=1))
        {
            return false;
        }
        
        else if(n==1)
            
        {
            return true;
        }
        
        
        else
            return isPowerOfFour(n/4);
        
      
    }
};