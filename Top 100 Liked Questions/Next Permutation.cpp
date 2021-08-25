class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int count=1;
        while(count--)
            next_permutation(nums.begin(),nums.end());
        
        
    }
};