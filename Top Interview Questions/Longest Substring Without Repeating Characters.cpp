class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        unordered_map<char,int> mp;
        int N=s.length();
        int maxx=0;
        while(j<N)
        {
            mp[s[j]]++;
            if(mp.size()==j-i+1)
            {
                int size=mp.size();
                maxx=max(size,maxx);
                j++;
            }
            else
                if(mp.size()<j-i+1)
                {
                    while(mp.size()<j-i+1)
                    {
                        mp[s[i]]--;
                        if(mp[s[i]]==0)
                            mp.erase(s[i]);
                        
                        i++;
                    }
                    j++;
                }
            
        }
        return maxx;
        
    }
};