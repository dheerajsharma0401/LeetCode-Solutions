class Solution {
public:
    string largestNumber(vector<int>& nums) {
     string res;
        vector<string> v;
        for(auto s:nums)
        {
            v.push_back(to_string(s));
        }
        
        sort(v.begin(),v.end(),comparator);
        
        for(auto s:v)
        {
            res=res+s;
        }
        int i=0;
        
        while(res[i]=='0' && i!=res.size()-1)
            i++;
        return res.substr(i);
    }
    
   static bool comparator(string a,string b)
    {
        return a+b>b+a;
    }
};