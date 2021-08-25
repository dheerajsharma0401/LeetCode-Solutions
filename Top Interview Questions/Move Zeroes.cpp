class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int counter2=0;
        for(int i=0;i< nums.size();i++)
        {
                if(nums[i]!=0)
                {
                    nums[counter2]=nums[i];
                    counter2++;
                }
            
        }
        for(int i=counter2;i<nums.size();i++)
            nums[i]=0;
        
    }
};