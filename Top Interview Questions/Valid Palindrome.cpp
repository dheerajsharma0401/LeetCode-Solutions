class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.length()==1)
            return true;
        string g="";
        int n=s.length();
        int i=0;
        int start=0;
        int end=s.length()-1;
        while(start<=end)
        {
            while(!isalnum(s[start]) && (start<end)) start++;
            while(!isalnum(s[end])&& (start<end)) end--;
            if(toupper(s[start])!=toupper(s[end]))
                return false;
            start++;
            end--;
            
               
        }
        return true;
    }
};