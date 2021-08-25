class Solution {
public:
    bool isPowerOfThree(int n) {
if(n==0)
   
    return 0;
         long int prod;
        for(int i=0;i<=n;i++)
        {
            prod=pow(3,i);
            if(prod<=n)
            {
            if(prod==n)
                return true;
            }
            else 
                break;
        }
            
        return false;
    }
};