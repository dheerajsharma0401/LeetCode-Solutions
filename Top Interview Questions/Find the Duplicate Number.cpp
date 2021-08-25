class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        vector<int >count(nums.size()+1,0);
        for(int i=1;i<=nums.size();i++)
        {
            count[nums[i-1]]++;
        }
        
        int answer=0;
        int flag=0;
          
          
        for(int i=1;((i<count.size())&&(flag==0));i++)
        {
            if(count[i]>=2)
            {
                answer=i;
                flag=1;
            }
        }
        return answer;
        
        
    }
};