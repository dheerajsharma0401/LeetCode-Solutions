class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn=INT_MAX;
     //   int indx;
        int n=prices.size();
        int profit=0;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<minn)
                minn=prices[i];
            
            if(prices[i]>minn)
                profit=max(profit,prices[i]-minn);
        }
        
        return profit;
        
    }
};