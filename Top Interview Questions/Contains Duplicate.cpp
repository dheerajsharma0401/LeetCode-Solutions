class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool status=false;
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
            return 0;
       
        for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]==nums[i+1]){
                    status=true;
                    break;}
            }
       
        
            
        return status;
    }
};