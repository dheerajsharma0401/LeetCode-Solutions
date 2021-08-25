class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, sum = 0;
        unordered_map<int, int> map;
        map[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (map.find(sum - k) != map.end())
                count += map[sum - k];
            
            if (map.find(sum) == map.end()) {
                map[sum] = 0 + 1;
            } else {
                map[sum] += 1;
            }
        }
        return count;
    }
};