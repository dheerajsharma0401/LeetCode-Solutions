class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end());
           int n = strs.size();
        if(n==1)
            return strs[0];
        if(n == 0) {
            return "";
        }
       string s="";
        
       string first=strs[0];
        int s1=strs[0].size();
        
        string last=strs[n-1];
        int s2=last.length();;
        
        
        int limit=min(s1,s2);
       
        for(int i=0;i<limit;i++)
        {
            if(first[i]==last[i])
                s+=first[i];
            else
                break;
                
        }
        return s;
        
    }
};