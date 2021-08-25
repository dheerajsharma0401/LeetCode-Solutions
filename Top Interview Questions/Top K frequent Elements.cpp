class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> freq;
        
       
        vector<int> ans;
        
       for(int i=0;i<nums.size();i++)
        {
           
            freq[nums[i]]++;
        }
       
        
        while(k--)
        {
            
            int currmax=0;
            int val=0;
           for(auto it=freq.begin();it!=freq.end();it++)
            {
                if(it->second>currmax)
                {
                    currmax=it->second;
                    val=it->first;
                    
                }
            }
           ans.push_back(val);
            freq[val]=0;
            
            
        }
        
        return ans;
        
    }
};