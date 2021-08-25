class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        int max=1;
        int now=1;
        
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]-nums[i]==0) continue;
            if(nums[i+1]-nums[i]==1)
                now++;
            else{
                if(now>max)
                    max=now;
                now=1;
                
            }
            if(now>max)
                max=now;
            //cout<<max<<" "<<now<<endl;
                
        }
        return max;
        
    }
};