class Solution {
public:
    int inf=INT_MAX-1;

     int coinChange(vector<int>& coins, int amount) {
         int n=coins.size();
         int mem[n+1][amount+1];
          for(int i=0;i<n+1;i++)
            mem[i][0]=0;
        for(int i=1;i<amount+1;i++)
        {
            mem[0][i]=inf;
        }
       
        
       for(int i=0;i<=amount;i++)
        {
           if(i%coins[0]==0)
                mem[1][i]=i/coins[0];
            else
                mem[1][i]=inf;
           }
        
        
        for(int i=2;i<=coins.size();i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                {
                    mem[i][j]=min(1+mem[i][j-coins[i-1]],mem[i-1][j]);
                }
                else
                    mem[i][j]=mem[i-1][j];
            }
        }
        
    long  int x=mem[coins.size()][amount];
        if(x>=inf)
            return -1;
        else
            return x;

        
    }
}; 