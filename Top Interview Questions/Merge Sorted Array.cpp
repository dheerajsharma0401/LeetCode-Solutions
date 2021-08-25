class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(int i=0;i<n;i++)
        {
            nums1.push_back(nums2[i]);
        }
       // sort(nums1.begin(),nums1.end());
       
        
      auto it1=nums1.begin()+m;
     auto it2=nums1.begin()+m+n;
        nums1.erase(it1,it2);
        
        
        sort(nums1.begin(),nums1.end());
        
        
    }
};