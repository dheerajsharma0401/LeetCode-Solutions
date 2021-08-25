class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++)
        {
            v.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            v.push_back(nums2[i]);
        }
        
        int size=v.size();
        sort(v.begin(),v.end());
        double median;
        
        if(size%2==0)
        {
            median=(v[(size/2)-1]+v[size/2]);
            median=median/2;
        }
        else
            median=v[size/2];
        
        return median;
    }
};