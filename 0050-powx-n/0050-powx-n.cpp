class Solution {
    
public:
    double helper(double x, long n){
        if(n==1) return x;
        if(n%2==0){
            return helper(x*x,n/2);
        }
        else{
            return x*helper(x*x,(n-1)/2);
        }
    }
    double myPow(double x, long n) {
        if(n==0) return 1.0;
        if(n<0){
            x = 1/x;
            n = -n;
        }
        return helper(x,n);
    }
};