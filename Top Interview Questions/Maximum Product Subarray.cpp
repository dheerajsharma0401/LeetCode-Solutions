class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0], minn = nums[0], maxx = nums[0];
        for(int i=1; i<nums.size(); i++){
            int tempMin = minn, tempMax = maxx;
            minn = min(nums[i], min(tempMin*nums[i], tempMax*nums[i]));
            maxx = max(nums[i], max(tempMin*nums[i], tempMax*nums[i]));
            ans = max(ans, max(minn, maxx));
        }
        return ans;
    }
};