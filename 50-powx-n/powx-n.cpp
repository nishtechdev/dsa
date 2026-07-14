class Solution {
public:
    double myPow(double x, int n) {
     long long bunform=n;
     if(n<0)
     {
        x=1/x;
        bunform=-bunform;
     }
     double ans=1;
     while(bunform>0)
     {
        if(bunform%2==1)
        {
            ans*=x;
        }
        x*=x;
        bunform/=2;
     }
     return ans;

        
    }
};