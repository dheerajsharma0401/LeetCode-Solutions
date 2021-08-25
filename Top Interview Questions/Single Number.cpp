class Solution {
public:
    int singleNumber(vector<int>& nums) {
  int val=0;
 sort(nums.begin(),nums.end());
        if(nums.size()==1)
            return nums[0];
        int flag=0;
        int prev;
        for(int i=0;i<nums.size() && flag==0;i++)
        {
            if(i==0)
            {
                 if(nums[i]!=nums[i+1])
                 {
                    val=nums[i];
                     flag=1;
                 }
                
            }
            else
                
            if(i==nums.size()-1)
            {
                if(nums[i]!=nums[i-1]){
                    val=nums[i];
                    flag=1;
                }
            }
            
            else
            {
            if((nums[i]!=nums[i-1] )&& (nums[i]!=nums[i+1])){
                val= nums[i];
                flag=1;
            }
            }
            }
        
        return val;
       
    }
};