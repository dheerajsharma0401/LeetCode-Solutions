class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int len1=nums1.size();
        int len2=nums2.size();
       
        vector<int> v;
       int start1=0;int start2=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(start1<len1 && start2<len2)
        {
            if(nums1[start1]==nums2[start2])
            {
                v.push_back(nums1[start1]);
                start1++;
                start2++;
                
            }
            else
                if(nums1[start1]<nums2[start2])
            {
                start1++;
               
            }
            else
                start2++;
        }
        return v;
        
    }
};