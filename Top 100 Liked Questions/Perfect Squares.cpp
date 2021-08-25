class Solution {
public:
    
   
    int numSquares(int n) {
        
     int mem[n+1];
        
        if(n==0)
            return 0;
        
        memset(mem,0,sizeof(mem));
        for(int i=1;i<=n;i++)
        {
            mem[i]=i;
            for(int j=2;j<=sqrt(i);j++)
            {
                mem[i]=min(mem[i],1+mem[i-j*j]);
                
            }
        }
        
        return mem[n];
    }
};