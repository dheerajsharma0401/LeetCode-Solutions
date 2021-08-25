class Solution {
public:
    int longestSubstring(string s, int k) {
        if(k>s.length())
            return 0;
       unordered_map<char,int> m;
        string finals="";
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        int max1=0;
        int start=0;
        int end=0;
        bool valid=true;
        int idx=0;
         while(idx <s.size() && m[s[idx]] >= k)    idx++;
        if(idx == s.size()) return s.size();
        
        int left = longestSubstring(s.substr(0 , idx) , k);
        int right = longestSubstring(s.substr(idx+1) , k);
        
        return max(left, right);
        
        
       
        
    }
};