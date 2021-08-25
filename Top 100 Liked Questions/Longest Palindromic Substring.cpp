class Solution {
public:
    string longestPalindrome(string s) {
        int len=s.length();
        int max=0;
        string res;
      
            for(int i=0;i<len;i++)
            {
                int l=i;
                int r=i+1;
                int sum=0;
                while(l>=0 && r<len && s[l]==s[r])
                {
                    sum=r-l+1;
                    if(sum>max)
                    {
                        max=sum;
                        res=s.substr(l,sum);
                        
                    }
                    l--;
                    r++;
                }
            }
        
      
                    for(int i=0;i<len;i++)
            {
                int l=i;
                int r=i;
                while(l>=0 && r<len && s[l]==s[r])
                {
                    int sum=r-l+1;
                    if(sum>max)
                    {
                        max=sum;
                        res=s.substr(l,sum);
                        
                    }
                    l--;
                    r++;
                }
            }
        
        return res;
        
    }
};