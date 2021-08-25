class Solution {
public:
    int jump(vector<int>& nums) {
       if(nums.size()<=1)
           return 0;
        
        int jump=0;
        int curmax=0;
        int curend=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            curmax=max(curmax,i+nums[i]);
            
            if(i==curend){
                jump++;
                curend=curmax;
            }
            
            if(curend>=nums.size()-1)
                break;
                
        }
        
        return jump;
        
    }
};