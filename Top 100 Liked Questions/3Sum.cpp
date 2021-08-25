class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
       // set<vector<int> > s;
        if(nums.size()==0) return res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i!=0 && nums[i]==nums[i-1])
                continue;
            int start=i+1;
            int end=n-1;
            while(start<end)
            {
                int sum=nums[i]+nums[start]+nums[end];
                if(sum==0)
                {
                   res.push_back({nums[i],nums[start],nums[end]});
                    start++;
                    
                    end--;
                    while(start<end && nums[start]==nums[start-1])
                        start++;
                    while(start<end && nums[end]==nums[end+1])
                        end--;
                }
                else
                    if(sum>0)
                        end--;
                else
                    start++;
            }
        }
        
        
        return res;
    }
};