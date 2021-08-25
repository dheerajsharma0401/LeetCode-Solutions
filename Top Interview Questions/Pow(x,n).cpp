class Solution {
public:
    double myPow(double x, int n) {

        double ans=1.0;
        long long nn=n;
        int flag=0;
        if(nn<0)
        {
            //flag=1;
            nn=nn*(-1);
        }
        
        
        while(nn!=0)
        {
            if(nn%2==0)
            {
                x=x*x;
                nn=nn/2;
            }
            else
               {
                    nn=nn-1;
                    ans=ans*x;
            }
        }
        if(n<0)
            ans=(double)(1.0)/(double)(ans);
        return ans;
        
        
    }
};
