class Solution {
public:
    bool canJump(vector<int>& nums) {
        long long j=0; 
       int last=nums.size()-1;
        for(int i=last-1;i>=0;i--)
        {
        if(i+nums[i]>=last)last=i;
        }
        if(last<=0)
            return true;
        return false;
        
    }
};
