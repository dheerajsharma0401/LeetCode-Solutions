class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        //cout<<nums.size();
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
           if((nums[i]==nums[j]) &&(i!=j)){
               nums.erase(nums.begin()+j);
               j--;
           }
                
            }
           /// count=count+1;
        }
        
        count=nums.size();
        return count;
    }
};