class Solution {
public:
   
   
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> v1;
        v.push_back(v1);
        
        
        for(int num:nums )
        {
            int n=v.size();
            
         for(int j=0;j<n;j++)
         {
             v.push_back(v[j]);
             
             v.back().push_back(num);
         }
            
        }
     return v;
        
    }
};