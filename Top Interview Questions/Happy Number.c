class Solution {
public:
    bool isHappy(int n) {
        
        int num=n;
        
        while(true)
        {
           // int d=n;
            int sum=0;
            while(n!=0)
            {
               int temp=n%10;
                sum+=(temp*temp);
                n=n/10;
            }
            n=sum;
            
            if(sum>=1 && sum<=9)
            {
                if(sum==1 || sum==7)
                    return true;
                else
                    return false;
            }
           
        }
        
       
        
    }
};