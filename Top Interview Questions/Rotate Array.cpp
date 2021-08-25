class Solution {
public:
   void rotate(vector<int>& nums, int k)
{
int len = nums.size();
vector<int> ans(len);

    for(int i = 0;i<len;i++)
    {
        ans[(i+k)%len] = nums[i];
    }
    nums = ans;
}
};