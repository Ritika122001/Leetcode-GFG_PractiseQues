class Solution {
public:
    int mirrorReflection(int p, int q) {
        
        
         int reflextion =p, ext =q;
        while (ext%2==0 && reflextion %2==0){
            ext/=2;
            reflextion/=2;
        }
        if(ext%2==0 && reflextion %2!=0)return 0;
        if(ext%2==1 && reflextion %2==0)return 2;
        if(ext%2==1 && reflextion %2!=0)return 1;
            
        return -1;
        
        
    }
};