class Solution {
public:
    
   
    int lengthOfLIS(vector<int>& nums) {
      int size=nums.size();
        if(size==0)
            return 0;
     vector<int> ans;
        ans.push_back(nums[0]);
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]>ans.back())
            {
                ans.push_back(nums[i]);
            }
            else
            {
                int ind=lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
                ans[ind]=nums[i];
            }
        }
        
        return ans.size();
    }

                
    
};  