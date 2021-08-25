class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> v(2);
        v[0]=-1;
        v[1]=-1;
        int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target && flag==0){
                v[0]=i;
                v[1]=i;
                flag=1;
            }
            else
                if(nums[i]==target && flag==1)
                    v[1]=i;
        }
        return v;
            
        
    }
};