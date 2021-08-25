class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int zerocount=0;
        int zindex=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) {zerocount++;zindex=i;continue;}
            else
                prod=prod*nums[i];
        }
        vector<int> ans(nums.size(),0);
        if(zerocount==0)
        {
            for(int i=0;i<nums.size();i++)
            {
                ans[i]=prod/nums[i];
            }
        }
        
        else if(zerocount==1)
            ans[zindex]=prod;
        else
            if(zerocount>1)
                return ans;
        return ans;
        
    }
};