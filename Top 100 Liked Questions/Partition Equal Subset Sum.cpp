class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
        }
        
        if(sum%2==1)
            return false;
        
        int newsum=sum/2;
        
        int dp[nums.size()+1][newsum+1];
        for(int i=0;i<=nums.size();i++)
        {
            dp[i][0]=1;
        }
        for(int j=1;j<=newsum;j++)
            dp[0][j]=0;
        
        for(int i=1;i<=nums.size();i++)
        {
            for(int j=1;j<=newsum;j++)
            {
                if(nums[i-1]<=j)
                dp[i][j]=dp[i-1][j]||dp[i-1][j-nums[i-1]];
                else
                    dp[i][j]=dp[i-1][j];
            }
            
        }
        
        return dp[nums.size()][newsum];
        
    }
};